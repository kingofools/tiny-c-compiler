typedef struct Struct1{
	extern auto signed int my_int = 10;
	unsigned long my_long = 98765421321;
}Struct1;

typedef union Union1{
	const char my_char = 'a';
	const int x = 90;
	char[] my_string = "string_check";
	register int  = 35351;
}Union1;

void main(int argc, char const *argv[], ...)
{
	restrict short my_shirt = 12;
	volatile double count =  53112.3 * sizeof(int);
	static int j = 5;
	enum x = 29;
	for (int i = 0; i < count; ++i)
	{
		do{
			if( i == 100){
				printf("check printf \t \n ");
			}
			else{
				my_shirt = i * count;
				my_shirt = i + count;
				my_shirt = i - count;
				my_shirt = i / count;
				my_shirt = i ** count;
				my_shirt = i % count;
				//checking comparison operators and single line comment
				if(i > count || i != count && i < count && i <= count || i >= count || ~i){
					i += 2;
					i -= 1;
					continue;
				}
				/*cheking 
				multiple
				line
				comments
				*/
				break;
			}
		}while(count < 100000)
	}

	restrict char a = "my_const_char";
	restrict int b = 45 ;
	_Bool is_true = false;
	_Complex is_complex = 0;
	_Imaginary i = -1 ;


	switch(j)
		case 1 :
			j--;
		case 2 :
			j << 4;
		case 3 :
			j >> 7;
		case 4 :
			if (!j || (j | i) || (j <<= i) || (i >>= j) || (i & j) && (i^j)){
			 	j *= 2;
			 	j /= 2;
			 	j %= 2;
			 	j &= 5;
			 	j ^= 2;
			 	j |= 5;
			 	j -> i = 4;
			 	j = #i;
			 	i . j;
			 } 
			 else
			 	goto 1;
			 inline x = 1;

		case 5 :
			int k = j ? 5 : 45 ; 
		default :



	return 0;
}