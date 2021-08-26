#include <stdio.h>
#include <string.h>

void main()
{
	char name[100],check[100];
	printf("Enter a word:\n");
	gets(name);
	strcpy(check,name);
	strrev(check);
	if(strcmp(check,name)==0){
		printf("You entered pallindrome.");
	}else{
		printf("Not Pallindrome");
	}
}
