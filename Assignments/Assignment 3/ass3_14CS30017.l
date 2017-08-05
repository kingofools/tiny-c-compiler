%{
#include "y.tab.h"
%}

auto			"auto"
enum			"enum"
restrict		"restrict"
unsigned		"unsigned"
break			"break"
extern			"extern"
return			"return"
void			"void"
case			"case"
float			"float"
short			"short"
volatile		"volatile"
char			"char"
for				"for"
signed			"signed"
while			"while"
const			"const"
goto			"goto"
sizeof			"sizeof"
_bool			"_bool"
continue		"continue"
if				"if"
static			"static"
_complex		"_complex"
default			"default"
inline			"inline"
struct			"struct"
_imaginary		"_imaginary"
do				"do"
int				"int"
switch			"switch"
double			"double"
long			"long"
typedef			"typedef"
else			"else"
register		"register"
union			"union"
id					[_A-Za-z][_A-Za-z0-9]*
integer_const		([123456789][0-9]*)|"0"
float_const			(((([0-9]+)?\.[0-9]+)|([0-9]+\.))([eE][+-]?[0-9]+)?)|([0-9]+[eE][+-]?[0-9]+)

char_const			\'(([^\'\\\n]|\\[fabrntv'"?\\])+)\'
string				\"(([^\'\\\n]|\\[fabrntv'"\?\\])+)\"
multicomment		"/"\*(([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*)\*+"/"
singlecomment		"//".*
%%
{singlecomment}							{return single_comment;}
{multicomment}							{return multi_comment;}
{auto}									{return auto_keyword;}
{enum}									{return enum_keyword;}
{restrict}								{return restrict_keyword;}
{unsigned}								{return unsigned_keyword;}
{break}									{return break_keyword;}
{extern}								{return extern_keyword;}
{return}								{return return_keyword;}
{void}									{return void_keyword;}
{case}									{return case_keyword;}
{float}									{return float_keyword;}
{short}									{return short_keyword;}
{volatile}								{return volatile_keyword;}
{char}									{return char_keyword;}
{for}									{return for_keyword;}
{signed}								{return signed_keyword;}
{while}									{return while_keyword;}
{const}									{return const_keyword;}
{goto}									{return goto_keyword;}
{sizeof}								{return sizeof_keyword;}
{_bool}									{return bool_keyword;}
{continue}								{return continue_keyword;}
{if}									{return if_keyword;}
{static}								{return static_keyword;}
{_complex}								{return complex_keyword;}
{default}								{return default_keyword;}
{inline}								{return inline_keyword;}
{struct}								{return struct_keyword;}
{_imaginary}							{return imaginary_keyword;}
{do}									{return do_keyword;}
{int}									{return int_keyword;}
{switch}								{return switch_keyword;}
{double}								{return double_keyword;}
{long}									{return long_keyword;}
{typedef}								{return typedef_keyword;}
{else}									{return else_keyword;}
{register}								{return register_keyword;}
{union}									{return union_keyword;}
{id}									{return identifier;}
[ \t\n\v]		;						/* ignore blank spaces */
{integer_const}							{return integer_constant;}
{float_const}							{return float_constant;}
{char_const}							{return char_constant;}
{string}								{return string_literal;}
"<<="									{return left_shift_equal;}
"..."									{return ellipses;}
">>="									{return right_shift_equal;}
"->"									{return val_at;}
"++"									{return plus_plus;}
"--"									{return minus_minus;}
"<<"									{return left_shift;}
">>"									{return right_shift;}
"<="									{return less_equal;}
">="									{return greater_equal;}
"=="									{return equal_equal;}
"!="									{return not_equal;}
"&&"									{return logical_and;}
"||"									{return logical_or;}
"*="									{return star_equal;}
"/="									{return by_equal;}
"%="									{return percent_equal;}
"+="									{return plus_equal;}
"-="									{return minus_equal;}
"&="									{return and_equal;}
"^="									{return bitwisenot_equal;}
"|="									{return or_equal;}
"["										{return left_sq_bkt;}
"]"										{return right_sq_bkt;}
"("										{return left_paren;}
")"										{return right_paren;}
"{"										{return left_brace;}
"}"										{return right_brace;}
"."										{return dot;}
"&"										{return amp;}
"*"										{return asterix;}
"+"										{return plus;}
"-"										{return minus;}
"~"										{return tilde;}
"!"										{return not;}
"/"										{return fw_slash;}
"%"										{return mod;}
"<"										{return less_than;}
">"										{return more_than;}
"^"										{return caret;}
"|"										{return bit_or;}
"?"										{return ter_que;}
":"										{return ter_colon;}
";"										{return semi_colon;}
"="										{return equals;}
","										{return comma;}
"#"										{return hash;}
%%
