%{
#include <stdio.h>
extern int yylex();
void yyerror(const char* s);
%}

%union {
  int intval;
  float floatval;
  char *charval;
}

%token single_comment;
%token multi_comment;
%token auto_keyword;
%token enum_keyword;
%token restrict_keyword;
%token unsigned_keyword;
%token break_keyword;
%token extern_keyword;
%token return_keyword;
%token void_keyword;
%token case_keyword;
%token float_keyword;
%token short_keyword;
%token volatile_keyword;
%token char_keyword;
%token for_keyword;
%token signed_keyword;
%token while_keyword;
%token const_keyword;
%token goto_keyword;
%token sizeof_keyword;
%token bool_keyword;
%token continue_keyword;
%token if_keyword;
%token static_keyword;
%token complex_keyword;
%token default_keyword;
%token inline_keyword;
%token struct_keyword;
%token imaginary_keyword;
%token do_keyword;
%token int_keyword;
%token switch_keyword;
%token double_keyword;
%token long_keyword;
%token typedef_keyword;
%token else_keyword;
%token register_keyword;
%token union_keyword;
%token <intval> identifier;
%token <intval>  integer_constant;
%token <floatval> float_constant;
%token <intval> enumeration;
%token <charval> char_constant;
%token <charval> string_literal;
%token val_at;
%token plus_plus;
%token minus_minus;
%token left_shift;
%token right_shift;
%token less_equal;
%token greater_equal;
%token equal_equal;
%token not_equal;
%token logical_and;
%token logical_or;
%token ellipses;
%token star_equal;
%token by_equal;
%token percent_equal;
%token plus_equal;
%token minus_equal;
%token left_shift_equal;
%token right_shift_equal;
%token and_equal;
%token bitwisenot_equal;
%token or_equal;

%token left_sq_bkt;
%token right_sq_bkt;
%token left_paren;
%token right_paren;
%token left_brace;
%token right_brace;
%token dot;
%token amp;
%token asterix;
%token plus;
%token minus;
%token tilde;
%token not;
%token fw_slash;
%token mod;
%token less_than;
%token more_than;
%token caret;
%token bit_or;
%token ter_que;
%token ter_colon;
%token semi_colon;
%token equals;
%token comma;
%token hash;
%%


statement : ;


%%

void yyerror(const char* s) {
	printf("%s", s);
}
