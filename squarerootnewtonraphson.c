/* Program to find square root of any number using Newton Raphson method */
#include <stdio.h>

void main()
{
	// Variable declaration 
	int c,p,i;
	float x_first,x_second;
	// Input
	printf("Enter a number: \n");
	scanf("%d",&c);
	printf("How precise value do you need? : \n");
	scanf("%d",&p);
	printf("Enter any positive value:\n");
	scanf("%f",&x_first );
	//Process 
	for(i=1;i<=p;i++)
	{
		
		x_second = 0.5*((x_first  + c /x_first));
		x_first = x_second;
	}
	// Output
	printf("Square root of enterd number is %f",x_first);
}
