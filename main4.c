#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int arc, char *argv[]) {
	

	FILE *fp;
	char str[100];
	int i;
	
	fp = fopen("sample.txt", "w");
	if (fp == NULL)a
	{
		return -1;
	}
	
	for(i=0;i<3;i++)
	{
		printf("Input a word : ");
		scanf("%s", str);
		fprintf(fp, "%s\n", str);
	}
	
	fclose(fp);
	
	return 0;
	
	}
