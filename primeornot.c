/* Program that check whether the entered number is prime or not */

#include <stdio.h>
#include <conio.h>

void main()
{
	int i,j,sum;
	for(i=1;i<10;i++){
		int c = 0;
		for(j=1;j<=i;j++){
			if(i%j ==0){
				c = c+1;
			}
			
	}
	if(c == 2){
				sum = sum + i;
		}
}
	printf("Sum =%d",sum);
}
