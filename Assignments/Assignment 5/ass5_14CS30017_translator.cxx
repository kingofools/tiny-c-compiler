#include "ass5_14CS30017_translator.h"

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int Sym_table::temp_count=0;

row* Sym_table::lookup(const string &name)
{
	if(hash_table_names.find(name)==hash_table_names.end())
	{row r;
		size++;
	hash_table_names[name]=num_rows++;
	r.Name=name;
	symbol_table.push_back(r);
	return &symbol_table[num_rows-1];}
	else return &symbol_table[hash_table_names[name]];
}

row* Sym_table::gentemp(Sym_table &Table)
{
	Table.size++;
	char temp_no[5];
	row temp;
	sprintf(temp_no,"t%d",temp_count++);
	string temp_label(temp_no);
	Table.hash_table_names[temp_label]=Table.num_rows++;
	temp.Name=temp_label;
	Table.symbol_table.push_back(temp);
	return &(Table.symbol_table[Table.num_rows-1]);
}

void Sym_table::update(const string &s,const row& f)
{
	row* fn=lookup(s);
	fn->Name=f.Name;
	fn->typ_vector=f.typ_vector;
	fn->Typ=f.Typ;
	fn->offset=f.offset;
	fn->nested_Table=f.nested_Table;
	fn->init_val=f.init_val;
	fn->size=f.size;
}

void Sym_table::print()
{	/*ofstream file;
	file.open("ass5_14CS30017_quads<3>.out",ofstream::app);*/
	cout<<"No of parameters = "<<param_count<<endl;
	cout<<"<=====================Symbol Table===================>\n";
	for (int i = 0; i < symbol_table.size(); ++i){
		row &ro=symbol_table[i];
		if(ro.Name=="-1")continue;
		if(ro.nested_Table!=NULL)ro.Typ=functiontype;
		cout<<"| "<<i<<" | "<<ro.Name<<" | ";
		if(ro.Typ==0)cout<<"int | ";
		if(ro.Typ==1)cout<<"double | ";
		if(ro.Typ==2)cout<<"char | ";
		if(ro.Typ==3){
			for(int i=0;i<ro.typ_vector.size();i++){
				cout<<"array("<<ro.typ_vector[i].first<<",";
				if(ro.typ_vector[i].second==3)continue;
			}
			if(ro.typ_vector[0].second==0){cout<<"int";}
			if(ro.typ_vector[0].second==1){cout<<"double";}
			if(ro.typ_vector[0].second==2){cout<<"char";}
			for(int j=0;j<ro.typ_vector.size();j++)cout<<")";
			cout<<" | ";
		}
		if(ro.Typ==4)cout<<"function | ";
		if(ro.Typ==5)cout<<"ptr_int | ";
		if(ro.Typ==6)cout<<"ptr_double | ";
		if(ro.Typ==7)cout<<"ptr_char | ";
		if(ro.Typ==8)cout<<"void | ";
		if(ro.init_val=="")cout<<"null";
		else cout<<ro.init_val;
		cout<<" | "<<ro.size<<" | "<<ro.offset<<" | "<<ro.ebpoffset<<" | ";
		if(ro.nested_Table!=NULL)
			{cout<<"ptr-to-ST(func)|\n";
		}
		else cout<<"null |\n";
	}
	cout<<"<====================================================>\n\n\n";
	for(int i=0;i<symbol_table.size();i++){
		row &ro=symbol_table[i];
		if(ro.nested_Table!=NULL){
		cout<<"\n\n<======================"<<ro.Name<<"===========================>\n\n";
		ro.nested_Table->print();
		}
	}
	//file.close();
}

void Sym_table::correctST(){
	Sym_table* temp;
	int i=0;
	while(i<size){
		if(symbol_table[i].Name=="main"){temp=symbol_table[i].nested_Table;}
		if(symbol_table[i].Typ==functiontype){temp=(symbol_table[i].nested_Table);
			i++;
			continue;
		}
		temp->lookup(symbol_table[i].Name);
		temp->update(symbol_table[i].Name,symbol_table[i]);
		i++;
	}
	i=0;
	while(i<size){if(symbol_table[i].Typ!=functiontype)symbol_table[i].Name="-1";i++;}
}

void Sym_table::activationRecord(){
	int i=0,eoffset=4;
	while(i<param_count){
		eoffset+=symbol_table[i].size;
		symbol_table[i].ebpoffset=eoffset;
		i++;
	}
	if(symbol_table[i].Name=="RetVal"){
		symbol_table[i].ebpoffset=4;
		i++;
	}
	eoffset=0;
	while(i<size){
		if(symbol_table[i].Typ==functiontype){symbol_table[i].nested_Table->activationRecord();}
		eoffset-=symbol_table[i].size;
		symbol_table[i].ebpoffset=eoffset;
		i++;
	}
}

Sym_table::Sym_table():num_rows(0),size(0),param_count(0)
{}

quad::quad(string op1, char *re, char *a1, char *a2)
:op(op1), result(strdup(re)), arg1(strdup(a1)), arg2(strdup(a2)){}

quad::quad(string op1,const string &re,const string &a1,const string &a2)
:op(op1),result(strdup(re.c_str())),arg1(strdup(a1.c_str())),arg2(strdup(a2.c_str()))
{}

quad::quad(string op1,const string &re,const string &a1)
:op(op1),result(strdup(re.c_str())),arg1(strdup(a1.c_str())),arg2(NULL)
{}

quad::quad(string op1, char *re, int a1num)
:op(op1),result(strdup(re)),arg2(NULL)
{
	arg1=new char[10];
	sprintf(arg1,"%d",a1num);
}

quad::quad(string op1, const string &re, int a1num):op(op1),result(strdup(re.c_str())){
	arg1=new char[10];
	sprintf(arg1,"%d",a1num);	
}

quad::quad(char* re,char* a1)
:op(""),result(strdup(re)),arg1(strdup(a1)),arg2(NULL){}

quad::quad(const string &re,const string &a1)
:op(""),result(strdup(re.c_str())),arg1(strdup(a1.c_str())),arg2(NULL)
{}

quad::quad(string op1,int no)
:op(op1),arg2(NULL),arg1(NULL)
{
	result = new char[10];
	sprintf(result,"%d",no);
}

void quad::emit(const quad &q,int index){
	/*ofstream file;
	file.open("ass5_14CS30017_quads<3>.out",ofstream::app);*/
	cout<<index<<" : ";
	if(q.arg2!=NULL&&q.arg1!=NULL){
		if(q.op=="[]=")cout<<q.result<<"["<<q.arg1<<"]"<<" = "<<q.arg2<<endl;
		else if(q.op=="=[]")cout<<q.result<<" = "<<q.arg1<<"["<<q.arg2<<"]\n";
		else if(q.op=="+"||q.op=="-"||q.op=="*"||q.op=="/"||q.op=="%"||q.op=="<<"||q.op==">>"||q.op=="=")cout<<q.result<<" = "<<q.arg1<<q.op<<q.arg2<<endl;
		else if(q.op=="|"||q.op=="&&"||q.op=="||"||q.op=="^"||q.op=="&")cout<<q.result<<" = "<<q.arg1<<q.op<<q.arg2<<endl;
		else cout<<"if "<<q.arg1<<q.op<<q.arg2<<" goto "<<q.result<<endl;
	}
	else if(q.arg2==NULL&&q.op!=""){
		if(q.op=="goto")cout<<"goto "<<q.result<<endl;
		else if(q.op=="return")cout<<"return "<<q.result<<endl;
		else if(q.op=="call")cout<<"call "<<q.result<<" , "<<q.arg1<<endl;
		else if(q.op=="if")cout<<"if "<<q.arg1<<" goto "<<q.result<<endl;
		else if(q.op=="=")cout<<q.result<<" "<<q.op<<" "<<q.arg1<<endl;
		else if(q.op=="&"||q.op=="*"||q.op=="+"||q.op=="-"||q.op=="~"||q.op=="!")cout<<q.result<<" = "<<q.op<<q.arg1<<endl;
		else if(q.op=="isnotif")cout<<"iffalse "<<q.arg1<<" goto "<<q.result<<endl;
	}
	else if(q.result=="param")cout<<q.result<<q.arg1<<endl;
	else cout<<q.result<<" = "<<q.arg1<<endl;
	//file.close();
}

void backpatch(const list &v,int index)
{
	for (int i=0;i<v.size();++i){
		char temp[20];
		sprintf(temp,"%d",index);
		quad_array[v[i]].setresult(temp);
	}
}

int typecheck(struct row* r1,struct row* r2)
{
	if(r1->Typ!=r2->Typ)return false;
	else {
		if(r1->typ_vector.size()!=r2->typ_vector.size())
		return false;
		for(int i=0;i<r1->typ_vector.size();++i){
			pair<int,int> x=r1->typ_vector[i],y=r2->typ_vector[i];
			if(x.second!=y.second)return false;}
	}
	return true;
}

list merge(const list &l1,const list &l2){
	list L(l1);
	L.insert(L.end(),l2.begin(),l2.end());
	return L;
}

list makelist(int index){
	list v;
	v.push_back(index);
	return v;
}