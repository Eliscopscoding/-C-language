#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

void data(char Diary[1000][100], int m)
{
	int i;
	printf("\n");
	for (i = 1; i < m; i++)
	{
		printf("\nData %d: %s\n", i, Diary[i]);
	}
	printf("\n");
}

void add(char Diary[1000][100], int m)
{
	char a;
	scanf("%c", &a);
	printf("Enter your data here : ");
	scanf("%[^\n]", Diary[m]);
}

int main()
{	
	char initid[50] = "Eliscope317";
	char initpassword[50] = "123456789";
	char usid[50], uspassword[50];
	char Diary[1000][100] = {};
	int n, m = 1;
label:

	printf("\nEnter your User ID : ");
	scanf("%s", &usid);
	printf("Enter your Password  : ");
	scanf("%s", &uspassword);

	if ((strcmp(initid, usid) == 0) && (strcmp(initpassword, uspassword) == 0))
	{

		printf("Login successfully ...\n\n");
	label2:
		printf("1-Want to see your diary\n2-Want to add your details\n3-Log out \n\nChoose number : ");
		scanf("%d", &n);

		switch (n)
		{
		case 1:
			// For seeing your diary
			system("cls");
			data(Diary, m);
			goto label2;
		case 2:
			// For add some data in diary
			add(Diary, m);
			m++;
			goto label2;
		case 3:
			// For log out the account
			system("cls");
			goto label;
		}
	}
	else if (strcmp(initid, usid) == 0)
	{
		printf("Enter correct password\n\n");
		goto label;
	}
	else if (strcmp(initpassword, uspassword) == 0)
	{
		printf("Enter correct id\n\n");
		goto label;
	}
	else
	{
		printf("Enter correct id and password\n\n");
		goto label;
	}
	return 0;
}
