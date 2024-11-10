#include<stdio.h>

void print(int array[],int size){
	if(size == 0){
		return;
	}
	printf("%d\n",array[size-1]);
	print(array,size-1);
}


int main(){
	int size; printf("Enter the size of array : "); scanf("%d",&size);
	int array[size];
	
	// Input array
	for(int i = 0; i < size; i++){
		printf("Enter element %d : ",i+1);
		scanf("%d",&array[i]);
	}
	
	print(array, size);
	
	
	return 0;
}