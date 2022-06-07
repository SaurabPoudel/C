#include <stdio.h>

int main()
{
	int num,fact;
	printf("Enter a number:\n");
	scanf("%d",&num);
	fact = factorial(num);
	printf("Factorial of %d is %d",num,fact);
}
int factorial(int num)
{
	int fact;
	if(num == 1){
		return 1;
	}
	else{
		fact = num * factorial(num -1);
		return fact;
	}
}
