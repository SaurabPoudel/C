#include <stdio.h>
#include <conio.h>

int main()
{
	char n[10];
	int a,r;
	FILE *fptr;
	fptr = fopen("studnet.txt","r");
	while(fscanf(fptr,"%s%d%d",n,&r,&a)!=EOF){
		printf("%s %d %d \n",n,r,a);
	}
	fclose(fptr);
	return 0;
}
