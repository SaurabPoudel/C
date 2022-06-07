/* Sorting of Array */
#include <stdio.h>
#include <conio.h>

int main(){
	int a[20],temp,n,i,j;
	printf("Enter how many numbers : <20");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter a number:\n");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;	
			}
		}
	}
	printf("Sorted array:\n");
	for(i=0;i<n;i++){
		printf("%d \t",a[i]);
	}
}
