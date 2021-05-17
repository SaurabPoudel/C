#include <stdio.h>
#include <conio.h>
void main()
{
	int i,a[10],j,k,l,n;
	for(i=0;i<10;i++){
		printf("Enter a number:\n");
		scanf("%d",&a[i]);
	}
	for(j=0;j<10;j++){
		for(l=j+1;l<10;l++){
			if(a[j]<a[l]){
				n = a[l];	
				a[l]=a[j];
				a[j]=n;
				
		}
		}
	}
	printf("Numbers in ascending order:\n");
	for(k=0;k<10;k++){
		printf("%d \t",a[k]);
	}
	getch();
}
