%{	 /* C Declarations and Definitions */

#include<stdio.h>
#include<string.h>
extern int yylex();
extern char *yytext;
void yyerror(char *s);	

%}

%union {
  int intval;
  float floatval;
  char* charval;
}

%token SINGLE_COMMENT;
%token MULTI_COMMENT;

%token AUTO_KEYWORD;
%token BREAK_KEYWORD;
%token CASE_KEYWORD;
%token CHAR_KEYWORD;
%token CONST_KEYWORD;
%token CONTINUE_KEYWORD;
%token DEFAULT_KEYWORD;
%token DO_KEYWORD;
%token DOUBLE_KEYWORD;
%token ELSE_KEYWORD;
%token ENUM_KEYWORD;
%token EXTERN_KEYWORD;
%token FLOAT_KEYWORD;
%token FOR_KEYWORD;
%token GOTO_KEYWORD;
%token IF_KEYWORD;
%token INLINE_KEYWORD;
%token INT_KEYWORD;
%token LONG_KEYWORD;
%token REGISTER_KEYWORD;
%token RESTRICT_KEYWORD;	
%token RETURN_KEYWORD;
%token SHORT_KEYWORD;
%token SIGNED_KEYWORD;
%token SIZEOF_KEYWORD;
%token STATIC_KEYWORD;
%token STRUCT_KEYWORD;
%token SWITCH_KEYWORD;
%token TYPEDEF_KEYWORD;
%token UNION_KEYWORD;
%token UNSIGNED_KEYWORD;
%token VOID_KEYWORD;
%token VOLATILE_KEYWORD;
%token WHILE_KEYWORD;
%token BOOL_KEYWORD;
%token COMPLEX_KEYWORD;
%token IMAGINARY_KEYWORD;

%token <intval> IDENTIFIER;
%token <intval>  INTEGER_CONSTANT;
%token <floatval> FLOAT_CONSTANT;
%token <charval> CHAR_CONSTANT;
%token <charval> STRING_LITERAL;

%token ELLIPSES;
%token RIGHT_SHIFT_EQUAL;
%token LEFT_SHIFT_EQUAL;
%token PLUS_EQUAL;
%token MINUS_EQUAL;
%token STAR_EQUAL;
%token BY_EQUAL;
%token PERCENT_EQUAL;
%token AND_EQUAL;
%token BITWISENOT_EQUAL;
%token OR_EQUAL;
%token RIGHT_SHIFT;
%token LEFT_SHIFT;
%token PLUS_PLUS;
%token MINUS_MINUS;
%token VAL_AT;
%token LOGICAL_AND;
%token LOGICAL_OR;
%token LESS_EQUAL;
%token GREATER_EQUAL;
%token EQUAL_EQUAL;
%token NOT_EQUAL;

%right '='
%left 	'+' '-'
%left   '*' '/' '%'

%start translation_unit
%%


primary_expression 
		:	IDENTIFIER
			{ printf("primary-expression: %s\n",yytext);}
		|	constant
			{ printf("primary-expression: constant\n");}
		| 	STRING_LITERAL
			{ printf("primary-expression: string-literal\n");}
		|	'(' expression ')'
			{ printf("primary-expression: ( expression )\n");}
		;

constant
		:	INTEGER_CONSTANT
			{ printf("constant: INTEGER_CONSTANT\n");}
		|	FLOAT_CONSTANT
			{ printf("constant: FLOAT_CONSTANT\n");}
		|	CHAR_CONSTANT
			{ printf("constant: CHAR_CONSTANT\n");}
		;

postfix_expression
		:	primary_expression
			{ printf("postfix-expression: primary-expression\n");}
		|	postfix_expression '[' expression ']'
			{ printf("postfix-expression: postfix-expression [ expression ]\n");}
		|	postfix_expression '(' ')'
			{ printf("postfix-expression: postfix-expression ( )\n");}
		|	postfix_expression '(' argument_expression_list ')'
			{ printf("postfix-expression: postfix-expression ( argument-expression-list )\n");}
		|	postfix_expression '.' IDENTIFIER
			{ printf("postfix-expression: postfix-expression . identifier\n");}
		|	postfix_expression VAL_AT IDENTIFIER
			{ printf("postfix-expression: postfix-expression −> identifier\n");}
		|	postfix_expression PLUS_PLUS
			{ printf("postfix-expression: postfix-expression ++\n");}
		|	postfix_expression MINUS_MINUS
			{ printf("postfix-expression: postfix-expression −−\n");}
		|	'(' type_name ')' '{' initializer_list '}'
			{ printf("postfix-expression: ( type-name ) { initializer-list }\n");}
		|	'(' type_name ')' '{' initializer_list ',' '}'
			{ printf("postfix-expression: ( type-name ) { initializer-list , }\n");}
		;


argument_expression_list
		:	assignment_expression
			{ printf("argument-expression-list: assignment-expression\n");}
		|	argument_expression_list ',' assignment_expression
			{ printf("argument-expression-list: argument-expression-list , assignment-expression\n");}
		;

unary_expression
		:	postfix_expression
			{ printf("unary-expression: postfix-expression\n");}
		|	PLUS_PLUS unary_expression
			{ printf("unary-expression: ++ unary-expression\n");}
		|	MINUS_MINUS unary_expression
			{ printf("unary-expression: −− unary-expression\n");}
		|	unary_operator cast_expression
			{ printf("unary-expression: unary-operator cast-expression\n");}
		|	SIZEOF_KEYWORD unary_expression
			{ printf("unary-expression: sizeof unary-expression\n");}
		|	SIZEOF_KEYWORD '(' type_name ')'
			{ printf("unary-expression: sizeof ( type-name )\n");}
		;

unary_operator
		:	'&'
			{ printf("unary-operator: &\n");}
		|	'*'
			{ printf("unary-operator: *\n");}
		|	'+'
			{ printf("unary-operator: +\n");}
		|	'-'
			{ printf("unary-operator: -\n");}
		|	'~'
			{ printf("unary-operator: ~\n");}
		|	'!'
			{ printf("unary-operator: !\n");}
		;

cast_expression
		:	unary_expression
			{ printf("cast-expression: unary-expression\n");}
		|	'(' type_name ')' cast_expression
			{ printf("cast-expression: ( type-name ) cast-expression\n");}
		;

multiplicative_expression
		:	cast_expression
			{ printf("multiplicative-expression: cast-expression\n");}
		|	multiplicative_expression '*' cast_expression
			{ printf("multiplicative-expression:multiplicative-expression ∗ cast-expression\n");}
		|	multiplicative_expression '/' cast_expression
			{ printf("multiplicative-expression: multiplicative-expression / cast-expression\n");}
		|	multiplicative_expression '%' cast_expression
			{ printf("multiplicative-expression: multiplicative-expression mod cast-expression\n");}
		;

additive_expression
		:	multiplicative_expression
			{ printf("additive-expression: multiplicative-expression\n");}
		|	additive_expression '+'	multiplicative_expression
			{ printf("additive-expression: additive-expression + multiplicative-expression\n");}
		|	additive_expression '-' multiplicative_expression
			{ printf("additive-expression: additive-expression − multiplicative-expression\n");}
		;

shift_expression
		:	additive_expression
			{ printf("shift-expression: additive-expression\n");}
		|	shift_expression LEFT_SHIFT additive_expression
			{ printf("shift-expression: shift-expression << additive-expression\n");}
		|	shift_expression RIGHT_SHIFT additive_expression
			{ printf("shift-expression: shift-expression >> additive-expression\n");}
		;

relational_expression
		:	shift_expression
			{ printf("relational-expression: shift-expression\n");}
		|	relational_expression '<' shift_expression
			{ printf("relational-expression: relational-expression < shift-expression\n");}
		|	relational_expression '>' shift_expression
			{ printf("relational-expression: relational-expression > shift-expression\n");}
		|	relational_expression LESS_EQUAL shift_expression
			{ printf("relational-expression: relational-expression <= shift-expression\n");}
		| 	relational_expression GREATER_EQUAL shift_expression
			{ printf("relational-expression: relational-expression >= shift-expression\n");}
		;

equality_expression
		:	relational_expression
			{ printf("equality-expression: relational-expression\n");}
		|	equality_expression EQUAL_EQUAL relational_expression
			{ printf("equality-expression: equality-expression == relational-expression\n");}
		|	equality_expression NOT_EQUAL relational_expression
			{ printf("equality-expression: equality-expression ! = relational-expression\n");}
		;

AND_expression
		:	equality_expression
			{ printf("AND-expression: equality-expression\n");}
		|	AND_expression '&' equality_expression
			{ printf("AND-expression: AND-expression & equality-expression\n");}
		;

exclusive_OR_expression
		:	AND_expression
			{ printf("exclusive-OR-expression: AND-expression\n");}
		|	exclusive_OR_expression '^' AND_expression
			{ printf("exclusive-OR-expression: exclusive-OR-expression ˆ AND-expression\n");}
		;

inclusive_OR_expression
		:	exclusive_OR_expression
			{ printf("inclusive-OR-expression: exclusive-OR-expression\n");}
		|	inclusive_OR_expression '|' exclusive_OR_expression
			{ printf("inclusive-OR-expression: inclusive-OR-expression | exclusive-OR-expression\n");}
		;

logical_AND_expression
		:	inclusive_OR_expression
			{ printf("logical-AND-expression: inclusive-OR-expression\n");}
		|	logical_AND_expression LOGICAL_AND inclusive_OR_expression
			{ printf("logical-AND-expression: ogical-AND-expression && inclusive-OR-expression\n");}
		;

logical_OR_expression
		:	logical_AND_expression
			{ printf("logical-OR-expression: logical-AND-expression\n");}
		|	logical_OR_expression LOGICAL_OR logical_AND_expression
			{ printf("logical-OR-expression: logical-OR-expression || logical-AND-expression\n");}
		;

conditional_expression
		:	logical_OR_expression
			{ printf("conditional-expression: logical-OR-expression\n");}
		|	logical_OR_expression '?' expression ':' conditional_expression
			{ printf("conditional-expression: logical-OR-expression ? expression : conditional-expression\n");}
		;

assignment_expression
		:	conditional_expression
			{ printf("assignment-expression: conditional-expression\n");}
		|	unary_expression assignment_operator assignment_expression
			{ printf("assignment-expression: unary-expression assignment-operator assignment-expression\n");}
		;

assignment_operator
		:	'='
			{ printf("assignment-operator: =\n");}
		|	STAR_EQUAL
			{ printf("assignment-operator: *=\n");}
		|	BY_EQUAL
			{ printf("assignment-operator: /=\n");}
		|	PERCENT_EQUAL
			{ printf("assignment-operator: mod=\n");}
		|	PLUS_EQUAL
			{ printf("assignment-operator: +=\n");}
		|	MINUS_EQUAL
			{ printf("assignment-operator: -=\n");}
		|	LEFT_SHIFT_EQUAL
			{ printf("assignment-operator: <<=\n");}
		|	RIGHT_SHIFT_EQUAL
			{ printf("assignment-operator: >>=\n");}
		|	AND_EQUAL
			{ printf("assignment-operator: &=\n");}
		|	BITWISENOT_EQUAL
			{ printf("assignment-operator: ^=\n");}
		|	OR_EQUAL
			{ printf("assignment-operator: |=\n");}
		;

expression
		:	assignment_expression
			{ printf("expression: assignment-expression\n");}
		|	expression ',' assignment_expression
			{ printf("expression: expression , assignment-expression\n");}
		;

constant_expression
		:	conditional_expression
			{ printf("constant-expression: conditional-expression\n");}
		;





declaration
		:	declaration_specifiers ';'
			{ printf("declaration: declaration-specifiers ;\n");}
		|	declaration_specifiers init_declarator_list ';'
			{ printf("declaration: declaration-specifiers init-declarator-list ;\n");}
		;

declaration_specifiers
		:	storage_class_specifier
			{ printf("declaration-specifiers: storage-class-specifier\n");}
		|	storage_class_specifier declaration_specifiers
			{ printf("declaration-specifiers: storage-class-specifier declaration-specifiers\n");}
		|	type_specifier
			{ printf("declaration-specifiers: type-specifier\n");}
		|	type_specifier declaration_specifiers
			{ printf("declaration-specifiers: type-specifier declaration-specifiers\n");}
		|	type_qualifier
			{ printf("declaration-specifiers: type-qualifier\n");}
		|	type_qualifier declaration_specifiers
			{ printf("declaration-specifiers: type-qualifier declaration-specifiers\n");}
		|	function_specifier
			{ printf("declaration-specifiers: function-specifier\n");}
		|	function_specifier declaration_specifiers
			{ printf("declaration-specifiers: function-specifier declaration-specifiers\n");}
		;

init_declarator_list
		:	init_declarator
			{ printf("init-declarator-list: init-declarator\n");}
		|	init_declarator_list ',' init_declarator
			{ printf("init-declarator-list: init-declarator-list , init-declarator\n");}
		;

init_declarator
		:	declarator
			{ printf("init-declarator: declarator\n");}
		|	declarator '=' initializer
			{ printf("init-declarator: declarator = initializer\n");}
		;

storage_class_specifier
		:	EXTERN_KEYWORD
			{ printf("storage-class-specifier: extern\n");}
		|	STATIC_KEYWORD
			{ printf("storage-class-specifier: static\n");}
		|	AUTO_KEYWORD
			{ printf("storage-class-specifier: auto\n");}
		|	REGISTER_KEYWORD
			{ printf("storage-class-specifier: register\n");}
		;

type_specifier
		:	VOID_KEYWORD
			{ printf("type-specifier: void\n");}
		|	CHAR_KEYWORD
			{ printf("type-specifier: char\n");}
		|	SHORT_KEYWORD
			{ printf("type-specifier: short\n");}
		|	INT_KEYWORD
			{ printf("type-specifier: int\n");}
		|	LONG_KEYWORD
			{ printf("type-specifier: long\n");}
		|	FLOAT_KEYWORD
			{ printf("type-specifier: float\n");}
		|	DOUBLE_KEYWORD
			{ printf("type-specifier: double\n");}
		|	SIGNED_KEYWORD
			{ printf("type-specifier: signed\n");} 
		|	UNSIGNED_KEYWORD
			{ printf("type-specifier: unsigned\n");}
		|	BOOL_KEYWORD
			{ printf("type-specifier: _Bool\n");}
		|	COMPLEX_KEYWORD
			{ printf("type-specifier: _Complex\n");}
		|	IMAGINARY_KEYWORD
			{ printf("type-specifier: _Imaginary\n");}
		|	enum_specifier
			{ printf("type-specifier: enum-specifier\n");}
		;

specifier_qualifier_list
		:	type_specifier
			{ printf("specifier-qualifier-list: type-specifier\n");}
		|	type_specifier specifier_qualifier_list
			{ printf("specifier-qualifier-list: type-specifier specifier-qualifier-list\n");}
		|	type_qualifier
			{ printf("specifier-qualifier-list: type-qualifier\n");}
		|	type_qualifier specifier_qualifier_list
			{ printf("specifier-qualifier-list: type-qualifier specifier-qualifier-list\n");}
		;

enum_specifier
		:	ENUM_KEYWORD '{' enumerator_list '}'
			{ printf("enum-specifier: enum { enumerator-list }\n");}
		|	ENUM_KEYWORD IDENTIFIER '{' enumerator_list '}'
			{ printf("enum-specifier: enum identifier { enumerator-list }\n");}
		|	ENUM_KEYWORD '{' enumerator_list ',' '}'
			{ printf("enum-specifier: enum { enumerator-list , }\n");}
		|	ENUM_KEYWORD IDENTIFIER '{' enumerator_list ',' '}'
			{ printf("enum-specifier: enum identifier { enumerator-list , }\n");}
		|	ENUM_KEYWORD IDENTIFIER
			{ printf("enum-specifier: enum identifier\n");}
		;

enumerator_list
		:	enumerator
			{ printf("enumerator-list: enumerator\n");}
		|	enumerator_list ',' enumerator
			{ printf("enumerator-list: enumerator-list , enumerator\n");}
		;

enumerator
		:	IDENTIFIER
			{ printf("enumerator: enumeration-constant\n");}
		|	IDENTIFIER '=' constant_expression
			{ printf("enumerator: enumeration-constant = constant-expression\n");}
		;

type_qualifier
		:	CONST_KEYWORD
			{ printf("type-qualifier: const\n");}
		|	RESTRICT_KEYWORD
			{ printf("type-qualifier: restrict\n");}
		|	VOLATILE_KEYWORD
			{ printf("type-qualifier: volatile\n");}
		;

function_specifier
		:	INLINE_KEYWORD
			{ printf("function-specifier: inline\n");}
		;

declarator
		:	pointer direct_declarator
			{ printf("declarator: pointer direct-declarator\n");}
		|	direct_declarator
			{ printf("declarator: direct-declarator\n");}
		;

direct_declarator
		:	IDENTIFIER
			{ printf("direct-declarator: identifier\n");}
		|	'(' declarator ')'
			{ printf("direct-declarator: ( declarator )\n");}
		|	direct_declarator '[' type_qualifier_list_opt assignment_expression_opt	']'
			{ printf("direct-declarator: direct-declarator [ type-qualifier-list-opt assignment-expression-opt ]\n");}
		|	direct_declarator '[' STATIC_KEYWORD type_qualifier_list_opt assignment_expression ']'
			{ printf("direct-declarator: direct-declarator [ static type-qualifier-list opt assignment-expression ]\n");}
		|	direct_declarator '[' type_qualifier_list STATIC_KEYWORD assignment_expression ']'
			{ printf("direct-declarator: direct-declarator [ type-qualifier-list static assignment-expression ]\n");}
		|	direct_declarator '[' type_qualifier_list_opt '*' ']'
			{ printf("direct-declarator: direct-declarator [ type-qualifier-list-opt * ]\n");}
		|	direct_declarator '(' parameter_type_list ')'
			{ printf("direct-declarator: direct-declarator ( parameter-type-list )\n");}
		|	direct_declarator '(' identifier_list ')'
			{ printf("direct-declarator: direct-declarator ( identifier-list )\n");}
		|	direct_declarator '(' ')'
			{ printf("direct-declarator: direct-declarator ( )\n");}
		;

type_qualifier_list_opt
		:	type_qualifier_list
			{ printf("type_qualifier_list_opt: type_qualifier_list\n");}
		|
			{ printf("type_qualifier_list_opt: \n");}
		;

assignment_expression_opt
		:	assignment_expression
			{ printf("assignment_expression_opt: assignment_expression\n");}
		|
			{ printf("assignment_expression_opt: \n");}
		;


pointer
		:	'*' type_qualifier_list_opt
			{ printf("pointer: * type-qualifier-list-opt\n");}
		|	'*' type_qualifier_list_opt pointer
			{ printf("pointer: * type-qualifier-list-opt pointer\n");}
		;

type_qualifier_list
		:	type_qualifier
			{ printf("type-qualifier-list: type-qualifier\n");}
		|	type_qualifier_list type_qualifier
			{ printf("type-qualifier-list: type-qualifier-list type-qualifier\n");}
		;

parameter_type_list
		:	parameter_list
			{ printf("parameter-type-list: parameter-list\n");}
		|	parameter_list ',' ELLIPSES
			{ printf("parameter-type-list: parameter-list , ...\n");}
		;

parameter_list
		:	parameter_declaration
			{ printf("parameter-list: parameter-declaration\n");}
		|	parameter_list ',' parameter_declaration
			{ printf("parameter-list: parameter-list , parameter-declaration\n");}
		;

parameter_declaration
		:	declaration_specifiers declarator
			{ printf("parameter-declaration: declaration-specifiers declarator\n");}
		|	declaration_specifiers
			{ printf("parameter-declaration: declaration-specifiers\n");}
		;

identifier_list
		:	IDENTIFIER
			{ printf("identifier-list: identifier\n");}
		|	identifier_list ',' IDENTIFIER
			{ printf("identifier-list: identifier-list , identifier\n");}
		;

type_name
		:	specifier_qualifier_list
			{ printf("type-name: specifier-qualifier-list\n");}
		;

initializer
		:	assignment_expression
			{ printf("initializer: assignment-expression\n");}
		|	'{' initializer_list '}'
			{ printf("initializer: { initializer-list }\n");}
		|	'{' initializer_list ',' '}'
			{ printf("initializer: { initializer-list , }\n");}
		;

initializer_list
		:	designation_opt initializer
			{ printf("initializer-list: designation-opt initializer\n");}
		|	initializer_list ',' designation_opt initializer
			{ printf("initializer-list: initializer-list , designation-opt initializer\n");}
		;

designation_opt
		:	designation
			{ printf("designation_opt: designation \n");}
		|
			{ printf("designation_opt: \n");}
		;

designation
		:	designator_list '='
			{ printf("designation: designator-list =\n");}
		;

designator_list
		:	designator
			{ printf("designator-list: designator\n");}
		|	designator_list designator
			{ printf("designator-list: designator-list designator\n");}
		;

designator
		:	'[' constant_expression ']'
			{ printf("designator: [ constant-expression ]\n");}
		|	'.' IDENTIFIER
			{ printf("designator: . identifier\n");}
		;






statement
		:	labeled_statement
			{ printf("statement: labeled-statement\n");}
		|	compound_statement
			{ printf("statement: compound-statement\n");}
		|	expression_statement
			{ printf("statement: expression-statement\n");}
		|	selection_statement
			{ printf("statement: selection-statement\n");}
		|	iteration_statement
			{ printf("statement: iteration-statement\n");}
		|	jump_statement
			{ printf("statement: jump-statement\n");}
		;

labeled_statement
		:	IDENTIFIER ':' statement
			{ printf("labeled-statement: identifier : statement\n");}
		|	CASE_KEYWORD constant_expression ':' statement
			{ printf("labeled-statement: case constant-expression : statement\n");}
		|	DEFAULT_KEYWORD ':' statement
			{ printf("labeled-statement: default : statement\n");}
		;

compound_statement
		:	'{' '}'
			{ printf("compound-statement: { }\n");}
		|	'{' block_item_list '}'
			{ printf("compound-statement: { block-item-list }\n");}
		;

block_item_list
		:	block_item
			{ printf("block-item-list: block-item\n");}
		|	block_item_list block_item
			{ printf("block-item-list: block-item-list block-item\n");}
		;

block_item
		:	declaration
			{ printf("block-item: declaration\n");}
		|	statement
			{ printf("block-item: statement\n");}
		;

expression_statement
		:	expression_opt ';'
			{ printf("expression-statement: expression-opt;\n");}
		;

expression_opt
		:	expression
			{ printf("expression-opt: expression\n");}
		|
			{ printf("expression-opt: \n");}
		;

selection_statement
		:	IF_KEYWORD '(' expression ')' statement
			{ printf("selection-statement: if ( expression ) statement\n");}
		|	IF_KEYWORD '(' expression ')' statement ELSE_KEYWORD statement
			{ printf("selection-statement: if ( expression ) statement else statement\n");}
		|	SWITCH_KEYWORD '(' expression ')' statement
			{ printf("selection-statement: switch ( expression ) statement\n");}
		;

iteration_statement
		:	WHILE_KEYWORD '(' expression ')' statement
			{ printf("iteration-statement: while ( expression ) statement\n");}
		|   DO_KEYWORD statement WHILE_KEYWORD '(' expression ')' ';'
			{ printf("iteration-statement: do statement while ( expression ) ;\n");}
		|	FOR_KEYWORD '(' expression_opt ';' expression_opt ';' expression_opt ')' statement
			{ printf("iteration-statement: for ( expression-opt ; expression-opt ; expression-opt ) statement\n");}
		|	FOR_KEYWORD '(' declaration expression_opt ';' expression_opt ')' statement
			{ printf("iteration-statement: for ( declaration expression-opt ; expression-opt ) statement\n");}
		;

jump_statement
		:	GOTO_KEYWORD IDENTIFIER ';'
			{ printf("jump-statement: goto identifier ;\n");}
		|	CONTINUE_KEYWORD ';'
			{ printf("jump-statement: continue ;\n");}
		|	BREAK_KEYWORD ';'
			{ printf("jump-statement: break ;\n");}
		|	RETURN_KEYWORD expression_opt ';'
			{ printf("jump-statement: return expression-opt ;\n");}
		;





translation_unit
		:	external_declaration
			{ printf("translation-unit: external-declaration\n");}
		|	translation_unit external_declaration
			{ printf("translation-unit: translation-unit external-declaration\n");}
		;

external_declaration
		:	function_definiton
			{ printf("external-declaration: function-definition\n");}
		|	declaration
			{ printf("external-declaration: declaration\n");}
		;

function_definiton
		:	declaration_specifiers declarator compound_statement
			{ printf("function-definition: declaration-specifiers declarator compound-statement\n");}
		|	declaration_specifiers declarator declaration_list compound_statement
			{ printf("function-definition: declaration-specifiers declarator declaration-list compound-statement\n");}
		;

declaration_list
		:	declaration
			{ printf("declaration-list: declaration\n");}
		|	declaration_list declaration
			{ printf("declaration-list: declaration-list declaration\n");}
		;


%%


void yyerror(char *s){
	printf("%s\n",s);
}



