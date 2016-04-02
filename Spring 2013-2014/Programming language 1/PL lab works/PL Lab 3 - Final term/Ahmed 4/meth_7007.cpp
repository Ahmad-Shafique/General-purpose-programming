#include<stdio.h>
#include<conio.h>

struct Student
{
	char name[20];
	char address[50];
	char telephone[50];
	char gender;
};
int main()
{
	struct Student student[15];
	int i;
	for(i=0;i<15;i++)
	{
		printf("\nEnter Student Info %d:\n",i+1);
		printf("\nEnter name:");
		scanf("%s",student[i].name);
		printf("\nEnter address:");
		scanf("%s",student[i].address);
		printf("\nEnter telephone no:");
		scanf("%s",student[i].telephone);
		printf("\nEnter Gender(M for male and F for female):");
		student[i].gender=getch();
		printf("%c",student[i].gender);
		printf("\n\n.........................");
	}

	printf("\n\n\n*********Display Info**********\n\n");
	for(i=0;i<15;i++)
	{
		printf("\nGender No %d student:%c",i+1,student[i].gender);
		printf("\nTelephone No %d student:%s",i+1,student[i].telephone);
		printf("\nAddress No %d student:%s",i+1,student[i].address);
		printf("\nName No %d student:%s",i+1,student[i].name);
		if(i<14)
			printf("\n..........................\n");
		else
			printf("\n\n\n\n#####End of display info of student####");
	}
	return 0;
}