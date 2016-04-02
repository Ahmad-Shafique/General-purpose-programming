#include <stdio.h>
#include <limits.h>

#define INT_CONST 1234
#define FLOAT_CONST 1234.98F
#define DOUBLE_CONST 1234.98
#define DOUBLE_CONST_EXP (1e-2)
#define A	'A'
#define V_TAB '\013'
#define V_TAB2 '\xb'
#define STRING_CONST "Hello World\n"


int main()
{
	printf("Int Constant is %d\n", INT_CONST);
	printf("Float Constant is %f\n", FLOAT_CONST);
	printf("Double Constant is %f\n", DOUBLE_CONST);
	printf("Double Exp Constant is %f\n", DOUBLE_CONST_EXP);
	printf("A Constant is %c\n", A);
	printf("V_TAB Constant is %c\n", V_TAB);
	printf("V_TAB Constant is %c\n", V_TAB2);
	printf("STRING_CONST is %s\n", STRING_CONST);
}
