#include "y.tab.h"
#include "stdio.h"
#include "string.h"

extern int yylex();
extern char *yytext;
void main(){
  int token;
  while((token = yylex())!=0){
    switch(token){
    case auto_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case enum_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case restrict_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case unsigned_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case break_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case extern_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case return_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case void_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case case_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case float_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case short_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case volatile_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case char_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case for_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case signed_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case while_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case const_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case goto_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case sizeof_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case bool_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case continue_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case if_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case static_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case complex_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case default_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case inline_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case struct_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case imaginary_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case do_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case int_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case switch_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case double_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case long_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case typedef_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case else_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case register_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case union_keyword : 
      printf("<keyword, %d, %s>\n",token,yytext);
      break;
    case identifier : 
      printf("<identifier, %d, %s>\n",token,yytext);
      break;
    case integer_constant : 
      printf("<integer, %d, %s>\n",token,yytext);
      break;
    case float_constant :  
      printf("<float, %d, %s>\n",token,yytext);
      break;
    case enumeration : 
      printf("<enumeration, %d, %s>\n",token,yytext);
      break;
    case char_constant : 
      printf("<character constant, %d, %s>\n",token,yytext);
      break;
    case string_literal : 
      printf("<string literal, %d, %s>\n",token,yytext);
      break;
    case left_shift_equal : 
      printf("<left_shift_equal, %d, %s>\n",token,yytext);
      break;
    case ellipses : 
      printf("<ellipses, %d, %s>\n",token,yytext);
      break;
    case right_shift_equal : 
      printf("<right_shift_equal, %d, %s>\n",token,yytext);
      break;
    case val_at : 
      printf("<val_at, %d, %s>\n",token,yytext);
      break;
    case plus_plus : 
      printf("<plus_plus, %d, %s>\n",token,yytext);
      break;
    case minus_minus : 
      printf("<minus_minus, %d, %s>\n",token,yytext);
      break;
    case left_shift : 
      printf("<left_shift, %d, %s>\n",token,yytext);
      break;
    case right_shift : 
      printf("<right_shift, %d, %s>\n",token,yytext);
      break;
    case less_equal : 
      printf("<less_equal, %d, %s>\n",token,yytext);
      break;
    case greater_equal : 
      printf("<greater_equal, %d, %s>\n",token,yytext);
      break;
    case equal_equal : 
      printf("<equal_equal, %d, %s>\n",token,yytext);
      break;
    case not_equal : 
      printf("<not_equal, %d, %s>\n",token,yytext);
      break;
    case logical_and : 
      printf("<logical_and, %d, %s>\n",token,yytext);
      break;
    case logical_or : 
      printf("<logical_or, %d, %s>\n",token,yytext);
      break;
    case star_equal : 
      printf("<star_equal, %d, %s>\n",token,yytext);
      break;
    case by_equal : 
      printf("<by_equal, %d, %s>\n",token,yytext);
      break;
    case percent_equal : 
      printf("<percent_equal, %d, %s>\n",token,yytext);
      break;
    case plus_equal : 
      printf("<plus_equal, %d, %s>\n",token,yytext);
      break;
    case minus_equal : 
      printf("<minus_equal, %d, %s>\n",token,yytext);
      break;
    case and_equal : 
      printf("<and_equal, %d, %s>\n",token,yytext);
      break;
    case bitwisenot_equal : 
      printf("<bitwisenot_equal, %d, %s>\n",token,yytext);
      break;
    case or_equal : 
      printf("<or_equal, %d, %s>\n",token,yytext);
      break;
    case left_sq_bkt : 
      printf("<square open, %d, %s>\n",token,yytext);
      break;
    case right_sq_bkt : 
      printf("<square closed, %d, %s>\n",token,yytext);
      break;
    case left_paren : 
      printf("<c open, %d, %s>\n",token,yytext);
      break;
    case right_paren: 
      printf("<c closed, %d, %s>\n",token,yytext);
      break;
    case left_brace : 
      printf("<curly open, %d, %s>\n",token,yytext);
      break;
    case right_brace : 
      printf("<curly closed, %d, %s>\n",token,yytext);
      break;
    case dot : 
      printf("<dot, %d, %s>\n",token,yytext);
      break;
    case amp : 
      printf("<bitwise and, %d, %s>\n",token,yytext);
      break;
    case asterix : 
      printf("<star, %d, %s>\n",token,yytext);
      break;
    case plus : 
      printf("<plus, %d, %s>\n",token,yytext);
      break;
    case minus : 
      printf("<minus, %d, %s>\n",token,yytext);
      break;
    case tilde : 
      printf("<bitwise complement, %d, %s>\n",token,yytext);
      break;
    case not : 
      printf("<logical not, %d, %s>\n",token,yytext);
      break;
    case fw_slash : 
      printf("<divide, %d, %s>\n",token,yytext);
      break;
    case mod : 
      printf("<modulo, %d, %s>\n",token,yytext);
      break;
    case less_than : 
      printf("<less than, %d, %s>\n",token,yytext);
      break;
    case more_than : 
      printf("<greater than, %d, %s>\n",token,yytext);
      break;
    case caret : 
      printf("<not, %d, %s>\n",token,yytext);
      break;
    case bit_or : 
      printf("<bitiwse or, %d, %s>\n", token,yytext);
      break;
    case ter_que : 
      printf("<ternary, %d, %s>\n",token,yytext);
      break;
    case ter_colon : 
      printf("<colon, %d, %s>\n",token,yytext);
      break;
    case semi_colon : 
      printf("<terminator, %d, %s>\n",token,yytext);
      break;
    case equals : 
      printf("<equals, %d, %s>\n",token,yytext);
      break;
    case comma : 
      printf("<comma, %d, %s>\n",token,yytext);
      break;
    case hash : 
      printf("<hashtag, %d, %s>\n",token,yytext);
      break;
    case single_comment : 
      printf("<single line comment, %d, %s>\n",token,yytext+2);
      break;
    case multi_comment :
      /*char* temp ;
      temp = (char*)malloc(strlen(yytext)); 
      strcpy(temp, yytext);
      int n = strlen(temp);
      temp[n-2] = '\0';*/
      printf("<multi line comment, %d, %s>\n",token,yytext);
      break;
    }
  }
}
