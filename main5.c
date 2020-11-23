#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int arc, char *argv[]) {
	

	FILE *fp;
	//char c;
	char str[100];
	
	fp = fopen("sample.txt", "w");
	if (fp == NULL)
	{
		return -1;
	 } 

 	//while ((c=fgetc(fp)) !=E0F) {
 	while (fgets(str, 100, fp) !=NULL) {
 			//printf("%c",c);
 			printf("%s", str);
	 }

	fclose(fp);
	
	return 0;
	
	}
