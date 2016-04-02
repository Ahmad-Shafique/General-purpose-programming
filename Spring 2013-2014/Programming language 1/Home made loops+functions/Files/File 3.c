#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

FILE *fp; /* pointer to a file */
/* open WRITEME.txt for reading */
fp = fopen("myfile", "r");
/* do stuff with the file */
fscanf(fp);
/* close the file -- it’s a good habit */
fclose(fp);
}

}
