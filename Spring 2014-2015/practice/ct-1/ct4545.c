#include <stdio>
#include <string>


int main()
{
    char str[1000],str2[1000];
    scanf("%[^\n]",str);
    strrev(str);
    printf("%s",str);
    return 0;
}


