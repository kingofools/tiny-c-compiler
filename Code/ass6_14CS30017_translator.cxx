#include "ass6_14CS30017_translator.h"

void get(string x)
{
    cout<<"--"<<x<<endl;
}


void q_array::emit(string res, int constant, opcode unary_op)
{
    quad temp;
    temp.op = unary_op;
    temp.result = res;
    stringstream ss; ss<<constant;
    ss>>temp.arg1;
    array.push_back(temp); nextinstr++;   
    
}

void q_array::emit(string res, string arg1, opcode op, string arg2)
{
    quad temp;
    temp.op = op;
    temp.result = res;
    temp.arg1 = arg1;
    temp.arg2 = arg2;
    array.push_back(temp); nextinstr++;
 }

void quad::print()
{

   
   if(OP_UNARY_MINUS<=op && op<=OP_ASSIGN)
    {
        cout<<result<<" = ";
        switch(op)
        {
            
            
            case OP_UNARY_MINUS : cout<<"-"; break;
            case OP_UNARY_PLUS : cout<<"+"; break;
            case OP_COMPLEMENT : cout<<"~"; break;
            case OP_NOT : cout<<"!"; break;
            
            case OP_ASSIGN : cout<<""; break;
        }
        cout<<arg1<<endl;
    }

 else if(OP_PLUS<=op && op<=OP_LOGICAL_OR)
    {
        cout<<result<<" = "<<arg1<<" ";
        switch(op)
        {
            case OP_PLUS: cout<<"+"; break;
            case OP_MINUS: cout<<"-"; break;
            
            case OP_XOR: cout<<"^"; break;
            case OP_AND: cout<<"&"; break;
	    case OP_MULT: cout<<"*"; break;
            case OP_DIVIDE: cout<<"/"; break;
            case OP_MODULO: cout<<"%"; break;
            case OP_SHIFT_LEFT: cout<<"<<"; break;
            case OP_SHIFT_RIGHT: cout<<">>"; break;
            case OP_OR: cout<<"|"; break;
            case OP_LOGICAL_AND: cout<<"&&"; break;
            case OP_LOGICAL_OR: cout<<"||"; break;
            
        }
        cout<<" "<<arg2<<endl;
    }	


    else if(OP_IF_LESS<=op && op<=OP_IF_NOT_EXPRESSION)
    {
        cout<<"if "<<arg1<<" ";
        switch(op)
        {
            //Conditional Jump
            case   OP_IF_LESS : cout<<"<"; break;
            case   OP_IF_GREATER : cout<<">"; break;
            
            case   OP_IF_EXPRESSION : cout<<"!= 0"; break;
	    case   OP_IF_LESS_OR_EQUAL : cout<<"<="; break;
            case   OP_IF_GREATER_OR_EQUAL : cout<<">="; break;
            case   OP_IF_EQUAL : cout<<"=="; break;
            case   OP_IF_NOT_EQUAL : cout<<"!="; break;
            case   OP_IF_NOT_EXPRESSION : cout<<"== 0"; break;
        }
        cout<<arg2<<" goto "<<result<<endl;            
    }
    else if(OP_C2I<=op && op<=OP_D2I)
    {
        cout<<result<<" = ";
        switch(op)
        {
            case OP_C2I : cout<<" Char2Int("<<arg1<<")"<<endl; break;
            case OP_C2D : cout<<" Char2Double("<<arg1<<")"<<endl; break;
            case OP_I2C : cout<<" Int2Char("<<arg1<<")"<<endl; break;
            case OP_D2C : cout<<" Double2Char("<<arg1<<")"<<endl; break;
            case OP_I2D : cout<<" Int2Double("<<arg1<<")"<<endl; break;
            case OP_D2I : cout<<" Double2Int("<<arg1<<")"<<endl; break;
        }            
    }

    else if(op == OP_GOTO){cout<<"goto "<<result<<endl;}
    else if(op == OP_PARAM)
    {
        cout<<"param "<<result<<endl;
    }
    else if(op == OP_CALL)
    {
        if(arg2 == "")
            ;
        else
            cout<<arg2<<" = ";
        cout<<"call "<<result<<" "<<arg1<<endl;
    }
    else if(op == OP_RETURN)
    {
        cout<<"return "<<result<<endl;
    }
    else if(op == OP_DEREFERENCE)
    {
        cout<<result<<" = *"<<arg1<<endl;
    }
    else if(op == OP_ARRAY_INDEX_TO)
    {
        cout<<result<<"["<<arg2<<"]"<<" = "<<arg1<<endl;
    }
    else if(op == OP_FUNC_BEG)
    {
        cout<<"func "<<result<<" starts"<<endl;
    }
    else if(op == OP_FUNC_END)
    {
        cout<<"func "<<result<<" ends"<<endl;
    }
    else if(op == OP_REFERENCE)
    {
        cout<<result<<" = &"<<arg1<<endl;
    }
 else if( op == OP_ARRAY_INDEX_FROM)
    {
        cout<<result<<" = "<<arg1<<"["<<arg2<<"]"<<endl;
    }
    
else 
    {
        cout<<result<<" = "<<arg1<<"( op = "<<op<<" )"<<arg2<<endl;
    }
    

}



void q_array::emit(string res, double constant, opcode unary_op)
{
    quad temp;
    temp.op = unary_op;
    temp.result = res;
    stringstream ss; ss<<constant;
    ss>>temp.arg1;
    array.push_back(temp); 
	nextinstr++;
    
}



void q_array::emit(string res, char constant, opcode unary_op)
{
    quad temp;
    temp.op = unary_op;
    temp.result = res;
    stringstream ss; ss<<constant;
    ss>>temp.arg1;
    array.push_back(temp); nextinstr++;
 
}
void q_array::backpatch(list<int> a, int index)
{
    for(list<int>::iterator it = a.begin(); it != a.end(); ++it)
    {
        stringstream ss; ss<<index;
        ss>>array[*it].result;
    }
}

void q_array::convInt2Bool(exxp* res)
{
   
    if(res->b_type == typ_bool) return;
    backpatch(res->truelist,nextinstr);
    backpatch(res->falselist,nextinstr);
    res->falselist = makelist(nextinstr);
    emit("",res->loc,OP_IF_NOT_EXPRESSION,"");//if res == 0 goto ;
    emit(res->loc,"~1",OP_ASSIGN,"");
    res->truelist = makelist(nextinstr);
    emit("","",OP_GOTO,"");//goto  
    res->b_type = typ_bool;
    
   
    return;
}


string symtab::gentemp(basic_type bt)
{
    static int count = 0;
    stringstream ss;
    ss<<"t"<<count++;
    string ret;
    ss>>ret;
    _symtab[ret] = new symdata; ord_sym.push_back(_symtab[ret]);
    _symtab[ret]->name = ret;
    _symtab[ret]->type.b_type = bt;
    _symtab[ret]->offset = offset;
    int tempsize = 0;
    if(bt == typ_int)
        tempsize = SZ_INT;
    else if(bt == typ_char)
        tempsize = SZ_CHAR;
    else if(bt == typ_double)
        tempsize = SZ_DB;
    else if(bt == typ_function || bt == typ_void)
                tempsize = 0;
    _symtab[ret]->size = tempsize;
    _symtab[ret]->init_val = NULL;
    offset += tempsize;

    return ret;
}
symdata* symtab::justlookup(string var)
{
    if(!_symtab.count(var))
    {
        return NULL;
    }
    else 
        return _symtab[var];
}
symdata* symtab::lookup(string var, basic_type bt, int pc)
{
    if(!_symtab.count(var))
    {
        _symtab[var] = new symdata; ord_sym.push_back(_symtab[var]);
        _symtab[var]->name = var;
        _symtab[var]->type.b_type = bt;
        _symtab[var]->offset = offset;
        int tempsize = 0;
        if(pc !=0)
        {

	
            tempsize = SZ_PTR;
            _symtab[var]->type.b_type = typ_array;
            _symtab[var]->type.base_t = bt;
            _symtab[var]->type.pc = pc;

           
        }
        else
        {
	     if(bt == typ_int)
                tempsize = SZ_INT;
            else if(bt == typ_char)
                tempsize = SZ_CHAR;
            else if(bt == typ_double)
                tempsize = SZ_DB;
            else if(bt == typ_function || bt == typ_void)
                tempsize = 0;
        }
        _symtab[var]->size = tempsize;
        _symtab[var]->init_val = NULL;
        offset += tempsize;
    }
    return _symtab[var];
}
void symtab::print()
{
    printf("Name\tType\t\tSize\tOffset\tInitVal\n");
    int i = 0;
    while( i<ord_sym.size())
    {
        symdata * t = ord_sym[i];
        cout<<t->name<<"\t"; 
        if(t->type.b_type == typ_char) cout<<"char\t";
        else if(t->type.b_type == typ_int) cout<<"int\t";
        else if(t->type.b_type == typ_double) cout<<"double\t";
        else if(t->type.b_type == typ_function) cout<<"function";
        else if(t->type.b_type == typ_void) cout<<"void";
        else 
        {
            if(t->type.base_t == typ_char) cout<<"char ";
            else if(t->type.base_t == typ_int) cout<<"int ";
            else if(t->type.base_t == typ_double) cout<<"double ";
        }


        if(t->type.b_type == typ_pointer)
        {
            for(int i= 0;i<t->type.pc;i++) 
                cout<<"*";
            cout<<"\t";
        }


        if(t->type.b_type == typ_array)
        {
            vector<int> tmp =  t->type.alist;
            int sz = tmp.size();
            //cout<<"[";
            for(int i = 0; i<sz; i++) cout<<"["<<tmp[i]<<"]";
            //cout<<"]";
        }        
        cout<<"\t";

        cout<<t->size<<"\t"<<t->offset<<"\t";
        
        if(t->init_val == NULL ) cout<<"null";
        else
        {
            if(t->type.b_type == typ_char) cout<<t->init_val->cval;
            else if(t->type.b_type == typ_int) cout<<t->init_val->ival;
            else if(t->type.b_type == typ_double) cout<<t->init_val->dval;
            else cout<<"N/A";
        }
        
        cout<<endl;
	i++;
    }
}
list<int> makelist(int index)
{
    list<int> ret;
    ret.push_back(index);
    return ret;
}
list<int> merge(list<int> a, list<int> b)
{
    list<int> ret;
    ret.merge(a);
    ret.merge(b);
    return ret;
}

string cur_func = "";
extern q_array QA;
extern symtab gst;
extern symtab *ST;
extern vector<string> string_constants;
int lnum = 30;
void prologue(int num)
{
    int a= num/16;
    a = (a+1)*16;

    cout << "\t.globl\t"<<cur_func<<endl;
    cout << "\t.type\t"<<cur_func<<", @function"<<endl;
    cout << cur_func << ":" << endl;
    cout << "\t" << "pushq\t%rbp"<<endl;
    cout << "\t" << "movq\t%rsp,\t%rbp"<<endl;
    cout << "\t" << "subq\t$"<<a<<",\t%rsp"<<endl;
}




void quadcode(quad q);
void map_Strings()
{
    cout << ".section\t.rodata"<<endl;
    std::vector<string>::iterator it;
    int num = 0;
    for(it=string_constants.begin();it!=string_constants.end();it++)
    {
        cout << ".LC"<<num << " : "<<endl; num++;
        cout << ".string\t"<<*it<<endl;
    }
}
void map_global()
{
    std::vector<symdata *>::iterator it;
    for(it=(gst.ord_sym).begin(); it!=(gst.ord_sym).end();it++)
    {
       

        if((*it)->type.b_type==typ_int && (*it)->name[0]!='t')
        {   
           
            if((*it)->init_val==NULL)
            {
                
                cout << "\t.comm\t"<<(*it)->name<<",4,4"<<endl;
            }
            else
            {
                cout << "\t.globl\t"<<(*it)->name<<endl;
                cout << "\t.data"<<endl;
                cout << "\t.align 4"<<endl;
                cout << "\t.type\t"<<(*it)->name<<", @object"<<endl;
                cout << "\t.size\t"<<(*it)->name<<", 4"<<endl;
                cout << (*it)->name<< ":" << endl;
                cout << "\t.long\t"<< (*it)->init_val->ival << endl;
            }
        }
        if((*it)->type.b_type==typ_char && (*it)->name[0]!='t')
        {   
           
            if((*it)->init_val==NULL)
            {
                
                cout << "\t.comm\t"<<(*it)->name<<",1,1"<<endl;
            }
            else
            {
                cout << "\t.globl\t"<<(*it)->name<<endl;
                cout << "\t.data"<<endl;
                cout << "\t.type\t"<<(*it)->name<<", @object"<<endl;
                cout << "\t.size\t"<<(*it)->name<<", 1"<<endl;
                cout << (*it)->name<< ":" << endl;
                cout << "\t.byte\t"<< (*it)->init_val->cval << endl;
            }
        }    
    }
}

void gencode()
{
    
    bool param;
    int membind;
    symdata * function = NULL;
    symtab * fsymTab = NULL;
    map_global();
    map_Strings();
    cout << "\t.text"<<endl;
    std::vector<quad>::iterator it;
    map<int,string> goto_labels; int label_ct = 0;
    for(it=QA.array.begin();it!=QA.array.end();it++)
    {
        if(it->op >= OP_GOTO && it->op <= OP_IF_NOT_EXPRESSION)
        {
            int goto_target;
            stringstream ss; ss<<it->result;
            ss>>goto_target;
            if(!goto_labels.count(goto_target))
            {

                string n_label; 
                stringstream temp;
                temp<<".L"<<label_ct; label_ct++;
                temp>>n_label;
                goto_labels[goto_target] = n_label;
               
            }
            it->result = goto_labels[goto_target];
        }
        
    }
    int loop_counter = 0;
    for(it=QA.array.begin();it!=QA.array.end();it++, loop_counter++)
    { 
        
        cout<<"  # "; it->print();
        if(goto_labels.count(loop_counter))
            cout<<goto_labels[loop_counter]<<":"<<endl;
      
        if(it->op == OP_FUNC_BEG)
        {
            it++;loop_counter++;
            if(it->op == OP_FUNC_END) continue; // no need when there is no defination
            else {it--;loop_counter--;}
            function = gst.justlookup(it->result);
            fsymTab = function->nested_symtab;
            std::vector<symdata*>::iterator it2;
            param=1;membind = 16;
            //put function symbol table in power
            ST=fsymTab;
            for(it2=(fsymTab->ord_sym).begin(); it2!=(fsymTab->ord_sym).end();it2++)
            {
                if((*it2)->name == "retVal")
                {
                    param=0;
                    membind = 0;
                }
                else
                {
                    if(param)
                    {
                        (*it2)->offset= membind;
                        membind += 8;
                    }
                    else
                    {
                        membind = membind - (*it2)->size;
                        (*it2)->offset = membind;
                    }
                }
                
            }
            
            if(membind<0)
            {
                membind = membind*-1;
            }
            else
            {
                membind=0;
            }
            
            cur_func = it->result;
            prologue(membind);
            
            continue;
        }
        else if(it->op == OP_FUNC_END)
        {

            ST = &(gst);
            cur_func = "";
            cout << "\t" << "leave" <<endl;
            cout << "\t" << "ret"<<endl;
            cout << "\t.size\t"<<it->result<<",\t.-"<<it->result<<endl;
            continue;
        }
        
         if(cur_func != "")
        quadcode(*it);   
    }
    
}
stack<vector<string> > param_stack;
void quadcode(quad q)
{
    
    if(q.op == OP_FUNC_BEG)
    {
        cout << "\t" << q.result << ":"<< endl;
        return;
    }

    
    string labelwaala = q.result;
    bool str_label = labelwaala[0] == '.' && labelwaala[1] == 'L' && labelwaala[2] == 'C';
   
    string printarg1="";string printarg2="";string printresult="";
    int arg1n=0, arg2n=0, resultn=0;
    symdata * s1=ST->lookup(q.arg1);
    symdata * s2=ST->lookup(q.arg2); 
    symdata * s3=ST->lookup(q.result);
    symdata * f1=gst.justlookup(q.arg1);
    symdata * f2=gst.justlookup(q.arg2); 
    symdata * f3=gst.justlookup(q.result);

   
    if(ST==&gst) 
    {
        
        printarg1=q.arg1;
        printarg2=q.arg2;
        printresult=q.result;

    }
    else
    {
        
        if(f1==NULL)
        {
            arg1n=s1->offset;
        }
        if(f2==NULL)
            arg2n=s2->offset;
        if(f3==NULL)    
            resultn=s3->offset; 
        if(q.arg1[0]>='9' || q.arg1[0]<='0')
        {   
                
            if(f1==NULL)
            {
                ostringstream convert;
                convert << arg1n;
                printarg1=convert.str();
                printarg1=printarg1+"(%rbp)";
            }
            else
            {
                printarg1=q.arg1;
            }

        }
        if(q.arg2[0]>='9' || q.arg2[0]<='0')
        {   
            if(f2==NULL)
            {                           
                ostringstream convert;
                convert << arg2n;
                printarg2=convert.str();
                printarg2=printarg2+"(%rbp)";
            }
            else
            {
                printarg2=q.arg2;
            }

        }
        if(q.result[0]>='9' || q.result[0]<='0')
        {       
            if(f3==NULL)
            {
                            
                ostringstream convert;
                convert << resultn;
                printresult=convert.str();
                printresult=printresult+"(%rbp)";

            }
            else
            {
                printresult=q.result;
            }
        }
        
    }
   
    if(str_label) printresult = labelwaala;
    if(q.op==OP_ASSIGN)
    {
        if(q.arg1[0]>='0' && q.arg1[0]<='9')
        {
           
           
            cout << "\t" << "movl" << "\t$" << q.arg1 <<"," << "\t" << printresult << endl; 
        }
        else
        {
            
            cout << "\t" << "movl" << "\t" <<printarg1 << ",\t%eax" << endl; 
            cout << "\t" << "movl" << "\t" << "%eax,\t" << printresult << "\t"  << endl; 
        }
    }
    else if(q.op==OP_UNARY_MINUS)
    {
       
        cout << "\t" << "movl" << "\t" <<printarg1<< ",\t%eax" << endl; 
        cout << "\t" << "negl\t %eax"<< endl;
        cout << "\t" << "movl" << "\t" << "%eax,\t" << printresult << "\t"  << endl; 
    }

    else if(q.op==OP_PLUS){
        if((q.arg2.compare("1"))==0)
        {
            cout << "\t" << "movl" << "\t" <<printarg1<< "," << "\t%edx" << endl;
            cout << "\t" << "addl\t $1,\t %edx" << endl;
            cout << "\t" << "movl\t %edx,\t %eax" << endl;
            cout << "\t" << "movl \t %eax,\t"  << printresult<< endl;
        }
        else
        {
            
            cout << "\t" << "movl" << "\t" <<printarg1<<"," << "\t%edx" << endl;
            if(q.arg2[0]>=0 && q.arg2[0]<=9)
            cout << "\t" << "movl\t$" << q.arg2 << "," << "%eax" << endl;
            else
            cout << "\t" << "movl" << "\t" <<printarg2 << "," << "\t%eax" << endl;
            cout << "\t" << "addl\t %edx,\t %eax" << endl;
            cout << "\t" << "movl \t %eax,\t"  << printresult  << endl;     
        }

    }
    else if(q.op==OP_MINUS){
    if((q.arg2).compare("1")==0)
    {
        cout << "\t" << "movl" << "\t" <<printarg1<< "," << "\t%edx" << endl;
        cout << "\t" << "subl\t $1,\t %edx" << endl;
        cout << "\t" << "movl\t %edx,\t %eax" << endl;
        cout << "\t" << "movl \t %eax,\t"  << printresult<< endl;
    }
    else
    {
       
        cout << "\t" << "movl" << "\t" <<printarg1<< "," << "\t%edx" << endl;
        cout << "\t" << "movl" << "\t" <<printarg2 << "," << "\t%eax" << endl;
        cout << "\t" << "subl\t %eax,\t %edx" << endl;
        cout << "\t" << "movl\t %edx,\t %eax" << endl;
        cout << "\t" << "movl \t %eax,\t"  << printresult<< endl;       
    }

    }

    else if(q.op==OP_MULT)
    {
        

        cout << "\t" << "movl" << "\t" <<printarg1 << "," << "\t%eax" << endl;
        if(q.arg2[0]>='0' && q.arg2[0]<='9')
            cout << "\t" << "imul\t$" << q.arg2 << "," << "%eax" << endl;
        else
        {
            cout << "\t" << "imul\t" <<printarg2 << "," << "%eax" << endl;
        }
        cout << "\t" << "movl \t %eax,\t"  << printresult<< endl;           
        
    }

    else if(q.op==OP_DIVIDE)
    {
        
        cout << "\t" << "movl\t" <<printarg1 << "," << "\t%eax" << endl;
        cout << "\t" << "cltd" << endl;
        cout << "\t" << "idivl\t"<< printarg2 << endl;
        cout << "\t" << "movl \t %eax,\t"  << printresult<< endl;       
        
    }
    else if(q.op==OP_MODULO)
    {
        
        cout << "\t" << "movl\t" <<printarg1 << "," << "\t%eax" << endl;
        cout << "\t" << "cltd" << endl;
        cout << "\t" << "idivl\t"<< printarg2 << endl;
        cout << "\t" << "movl \t %edx,\t"  << printresult << endl;          
        
    }

    else if(q.op==OP_GOTO)
    {
        
        cout << "\t" << "jmp\t" <<q.result << endl;
    }

    else if(q.op==OP_IF_LESS)
    {
        
        cout << "\t" << "movl\t" <<printarg1 << "," << "\t%eax" << endl;
        cout << "\t" << "cmpl\t" <<printarg2 << "," << "\t%eax" << endl;
        cout << "\t" << "jge\t" << ".L" << lnum << endl;
        cout << "\t" << "jmp\t" <<q.result << endl;
        cout << ".L" << lnum  << ":" << endl;lnum++;

    }
 else if(q.op==OP_IF_NOT_EQUAL)
    {
        
        cout << "\t" << "movl\t" <<printarg1<< "," << "\t%eax" << endl;
        cout << "\t" << "cmpl\t" <<printarg2 << "," << "\t%eax" << endl;
        cout << "\t" << "je\t" << ".L" << lnum << endl;
        cout << "\t" << "jmp\t" <<q.result << endl;
        cout << ".L" << lnum  << ":" << endl;lnum++;
    }
    else if(q.op==OP_IF_GREATER)
    {
       
        cout << "\t" << "movl\t" <<printarg2 << "," << "\t%eax" << endl;
        cout << "\t" << "cmpl\t" << printarg1 << "," << "\t%eax" << endl;
        cout << "\t" << "jge\t" << ".L" << lnum << endl;
        cout << "\t" << "jmp\t" <<q.result << endl;
        cout << ".L" << lnum  << ":" << endl;lnum++;
    }


    else if(q.op==OP_IF_EQUAL)
    {
        
        cout << "\t" << "movl\t" <<printarg1 << "," << "\t%eax" << endl;
        cout << "\t" << "cmpl\t" <<printarg2 << "," << "\t%eax" << endl;
        cout << "\t" << "jne\t" << ".L" << lnum << endl;
        cout << "\t" << "jmp\t" <<q.result << endl;
        cout << ".L" << lnum  << ":" << endl;lnum++;
    }
   


    else if(q.op==OP_IF_EXPRESSION)
    {  
        cout << "\t" << "cmpl\t$0,\t"<<printarg1<< endl; 
        cout << "\t" << "je\t.L"<< lnum<<endl; 
        cout << "\t" << "jmp\t"<<q.result<<endl;
        cout << ".L" <<lnum<<" : "<< endl;  
        lnum++;
    }
    else if(q.op==OP_PARAM)
    {
        
        stringstream ss1, ss2;
        if(printresult[0]=='.')
            ss1 << "\t" << "movq\t$"<<printresult<<",\t%rax"<< endl;
        else if(q.result[0]>=0 && q.result[0]<=9)
            ss1 << "\t" << "movq\t"<<q.result<<",\t%rax"<< endl;
        else
            ss1 << "\t" << "movq\t"<<printresult<<",\t%rax"<< endl;

        ss2 << "\t" << "pushq\t%rax"<< endl;
       
        vector<string> k; k.push_back(ss1.str()); k.push_back(ss2.str());
        param_stack.push(k);
    }

    else if(q.op==OP_IF_NOT_EXPRESSION)
    {

        cout << "\t" << "cmpl\t$0,\t"<<printarg1<< endl; 
        cout << "\t" << "jne\t.L"<< lnum<<endl; 
        cout << "\t" << "jmp\t"<<q.result<<endl;
        cout << ".L" <<lnum<<" : "<< endl;  
        lnum++;     
    }

   
    else if(q.op==OP_CALL)
    {
        while(param_stack.size())
        {
            vector<string> k; k = param_stack.top();
            param_stack.pop();
            int ksz = k.size();
            for(int i = 0; i<ksz; i++)
            {
		
                cout<<k[i];

		if(i==ksz-1)
		{
		    cout<< "movq %rdx, %rdi\n";
		}
            }
        }
        int num;
        stringstream ss;
        ss<<q.arg1;
        ss>>num;
        num=num*8;
        cout << "\t" << "call\t"<<q.result << endl;
        cout << "\t" << "addq\t$"<<num<<",\t%rsp"<< endl;
        if(q.arg2 != "")
            cout << "\t" << "movl\t%eax,\t"<<printarg2<< endl;

    }

    else if(q.op==OP_RETURN)
    {
        if(q.result.compare("")!=0)
        cout << "\t" << "movl\t"<<printresult<< ",\t%eax"<< endl;

    }
else if(q.op==OP_ARRAY_INDEX_TO)
    {
        
        cout << "\t" << "movl\t"<<printarg2<<",\t%edx"<< endl;
        cout << "\t" << "movl\t"<<printarg1<<",\t%eax"<< endl;
        cout << "\t" << "movl\t%eax,\t"<<resultn<<"(%rbp,%edx,1)"<< endl;
    }

    else if(q.op==OP_ARRAY_INDEX_FROM)
    {
        
        cout << "\t" << "movl\t"<<printarg2<<",\t%edx"<< endl;
        
        cout << "\t" << "movl\t"<<arg1n<<"(%rbp,%edx,1),\t%eax"<< endl;
        cout << "\t" << "movl\t%eax,\t"<< printresult<< endl;   
    }

    

    else if(q.op==OP_REFERENCE)
    {
        
        cout << "\t" << "leaq\t"<<printarg1<<",\t%rax"<<endl;
        cout << "\t" << "movq \t%rax,\t"<< printresult<< endl;
    }


    else if(q.op==OP_DEREFERENCE)
    {
        
        cout << "\t" << "movq\t"<<printarg1<<",\t%rax"<<endl;
        cout << "\t" << "movq\t(%rax),\t %rcx"<<endl;
        cout << "\t" << "movq\t%rcx,\t"<< printresult<< endl;
    }

}
