#include <stdio.h>
#include <conio.h>

int main(){
	int a,*pa,b,*pb;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Enter another number:");
	scanf("%d",&b);
	pa = &a;
	pb = &b;
	int sum = *pa + *pb;
	printf("\nThe sum is %d",sum);
	return 0;
}
