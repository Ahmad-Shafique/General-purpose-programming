#include <stdio.h>
#include <limits.h>
int main()
{
	printf("****** MAX and MIN LIMITS ***********\n");
	printf("Max int is %d, Min int is %d\n", INT_MAX, INT_MIN);
	printf("Max short is %d, Min short is %d\n", SHRT_MAX, SHRT_MIN);
	printf("Max long is %d, Min long is %d\n", LONG_MAX, LONG_MIN);
	printf("Max char is %c, Min char is %c\n", CHAR_MAX, CHAR_MIN);
	return 0;
}
