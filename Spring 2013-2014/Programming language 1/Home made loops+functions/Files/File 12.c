#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp;
	char ch;
	fp = fopen("Exp 1.txt", "w");	// open file to write
	while(1) {
		scanf("%c", &ch);
		if (ch == '\n')
			break;	// read until newline found
		putc(ch, fp);
	}
	fprintf(fp,"\n");
	fclose(fp);

}
