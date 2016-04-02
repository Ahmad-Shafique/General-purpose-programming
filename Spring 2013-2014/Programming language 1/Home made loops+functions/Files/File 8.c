#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp;
	char ch;
	fp = fopen("newfile.txt", "r");	// open file to write
	while(1) {
        fscanf(fp,"%c",&ch);
        printf("%c",ch);
		if (ch == '\n')
			break;	// read until newline found

	}
	fclose(fp);

}
