/* Name, post salary */
#include <stdio.h>
#include <conio.h>

int main()
{
	char name[20][20],post[20][20];
	int salary,n,i;
	FILE *fp;
	fp = fopen("sample.txt","w");
	printf("Enter how many employee:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter name post and salary: ");
		scanf("%s%s%d",name[i],post[i],&salary);
		fprintf(fp,"Name: %s Post: %s Salary: %d \n",name[i],post[i],salary);
	}
	fclose(fp);
	return 0;
}
