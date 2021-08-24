#include <stdio.h>

 void main(){
	int arr[]={1,2,3,4};
	int target = 3;
	int ans = search(&arr,target);
	printf("Index is %d",ans);
	
}
 int search(int* arr,int target){
	int i;
	for(i=0;sizeof(arr);i++){
		if(arr[i]==target){
			return i;
		}
	}
	return -1;
}
