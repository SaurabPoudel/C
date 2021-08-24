#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char str[100];
	int i,n;
	printf("Enter a string:\n");
	gets(str);
	for(i=0;str[i]!=0;i++){
		if(str[i] ==' '){
			n = n + 1;
		}
	}
	printf("Number of spaces are: %d",n);
}
