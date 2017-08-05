/* C Declarations and Definitions */
%{
#include "y.tab.h"
%}


/* Regular Expression Definitions */
ID 									[_a-zA-Z][_a-zA-Z0-9]*
INT 								([1-9][0-9]*|[0]+)
FLOAT 								(([0-9]+)?\.[0-9]+|[0-9]+\.)([Ee][+-]?[0-9]+)?|[0-9][Ee][+-]?[0-9]+
CHAR								[\']([^\'\\\n]|\\\'|\\\"|\\\?|\\\\|\\a|\\b|\\f|\\n|\\r|\\t|\\v)+[\']
STRING								[\"]([^\"\\\n]|\\\'|\\\"|\\\?|\\\\|\\a|\\b|\\f|\\n|\\r|\\t|\\v)*[\"]
SINGLECOMMENT						[\/][\/][^\n]*
MULTICOMMENT 						([\/][\*](([^\*])|((\*)+[^\/\*]))*[\*][\/])

%%

{SINGLECOMMENT}						{return SINGLE_COMMENT;}
{MULTICOMMENT}						{return MULTI_COMMENT;}

"auto"								{ return AUTO_KEYWORD; }
"break"								{ return BREAK_KEYWORD; }
"case"								{ return CASE_KEYWORD; }
"char"								{ return CHAR_KEYWORD; }
"const"								{ return CONST_KEYWORD; }
"continue"							{ return CONTINUE_KEYWORD; }
"default"							{ return DEFAULT_KEYWORD; }
"do"								{ return DO_KEYWORD; }
"double"							{ return DOUBLE_KEYWORD; }
"else"								{ return ELSE_KEYWORD; }
"enum"								{ return ENUM_KEYWORD; }
"extern"							{ return EXTERN_KEYWORD; }
"float"								{ return FLOAT_KEYWORD; }
"for"								{ return FOR_KEYWORD; }
"goto"								{ return GOTO_KEYWORD; }
"if"								{ return IF_KEYWORD; }
"inline"							{ return INLINE_KEYWORD; }
"int"								{ return INT_KEYWORD; }
"long"								{ return LONG_KEYWORD; }
"register"							{ return REGISTER_KEYWORD; }
"restrict"							{ return RESTRICT_KEYWORD; }	
"return"							{ return RETURN_KEYWORD; }
"short"								{ return SHORT_KEYWORD; }
"signed"							{ return SIGNED_KEYWORD; }
"sizeof"							{ return SIZEOF_KEYWORD; }
"static"							{ return STATIC_KEYWORD; }
"struct"							{ return STRUCT_KEYWORD; }
"switch"							{ return SWITCH_KEYWORD; }
"typedef"							{ return TYPEDEF_KEYWORD; }
"union"								{ return UNION_KEYWORD; }
"unsigned"							{ return UNSIGNED_KEYWORD; }
"void"								{ return VOID_KEYWORD; }
"volatile"							{ return VOLATILE_KEYWORD; }
"while"								{ return WHILE_KEYWORD; }
"_Bool"								{ return BOOL_KEYWORD; }
"_Complex"							{ return COMPLEX_KEYWORD; }
"_Imaginary"						{ return IMAGINARY_KEYWORD; }

{ID}								{ return IDENTIFIER; }
[ \t\n\v]							{}/* Ignore blank spaces */
{INT}			 					{ return INTEGER_CONSTANT; }
{FLOAT}								{ return FLOAT_CONSTANT; }
{CHAR}								{ return CHAR_CONSTANT; }
{STRING}							{ return STRING_LITERAL; }

"..."								{ return ELLIPSES; }
">>="								{ return RIGHT_SHIFT_EQUAL; }
"<<="								{ return LEFT_SHIFT_EQUAL; }
"+="								{ return PLUS_EQUAL; }
"-="								{ return MINUS_EQUAL; }
"*="								{ return STAR_EQUAL; }
"/="								{ return BY_EQUAL; }
"%="								{ return PERCENT_EQUAL; }
"&="								{ return AND_EQUAL; }
"^="								{ return BITWISENOT_EQUAL; }
"|="								{ return OR_EQUAL; }
">>"								{ return RIGHT_SHIFT; }
"<<"								{ return LEFT_SHIFT; }
"++"								{ return PLUS_PLUS; }
"--"								{ return MINUS_MINUS; }
"->"								{ return VAL_AT; }
"&&"								{ return LOGICAL_AND; }
"||"								{ return LOGICAL_OR; }
"<="								{ return LESS_EQUAL; }
">="								{ return GREATER_EQUAL; }
"=="								{ return EQUAL_EQUAL; }
"!="								{ return NOT_EQUAL; }

";"									{ return yytext[0]; }
"{"									{ return yytext[0]; }
"}"									{ return yytext[0]; }
","									{ return yytext[0]; }
":"									{ return yytext[0]; }
"="									{ return yytext[0]; }
"("									{ return yytext[0]; }
")"									{ return yytext[0]; }
"["									{ return yytext[0]; }
"]"									{ return yytext[0]; }
"."									{ return yytext[0]; }
"&"									{ return yytext[0]; }
"!"									{ return yytext[0]; }
"~"									{ return yytext[0]; }
"-"									{ return yytext[0]; }
"+"									{ return yytext[0]; }
"*"									{ return yytext[0]; }
"/"									{ return yytext[0]; }
"%"									{ return yytext[0]; }
"<"									{ return yytext[0]; }
">"									{ return yytext[0]; }
"^"									{ return yytext[0]; }
"|"									{ return yytext[0]; }
"?"									{ return yytext[0]; }
"#"									{ return yytext[0]; }
%%