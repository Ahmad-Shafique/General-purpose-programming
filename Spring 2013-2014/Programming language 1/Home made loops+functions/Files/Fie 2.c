#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp;
	char ch;
	fp = fopen("myfile", "w");	// open file to write
	while(1) {
		getc();
		if (ch == '\n')
			break;	// read until newline found
	}
	fclose(fp);

}
