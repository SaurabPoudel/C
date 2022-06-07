#include <stdio.h>
#include <conio.h>
int fibonnaci(int);

int main(){
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d \t",fibonnaci(i));
	}
	return 0;
}
int fibonnaci(int i){
	if(i==0){
		return 0;
	}
	if(i ==1){
		return 1;
	}
	return fibonnaci(i-1)+fibonnaci(i-2);
}
