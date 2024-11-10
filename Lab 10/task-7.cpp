#include<stdio.h>

void bubble_sort(int size,int array[]){
	
	
	for(int i = 0; i < size; i++){
		if(array[i] > array[i+1]){
			int temp = array[i];
			array[i] = array[i+1];
			array[i+1] = temp;
		}
	}
	if(size -1 == 0){
		
		return;
	}
	bubble_sort(size - 1, array);
}


int main(){
	int size; printf("Enter the size of array : "); scanf("%d",&size);
	int array[size] = {0};
	
	//Input array
	for(int i = 0; i < size; i++){
		printf("Enter element %d : ",i+1);
		scanf("%d",&array[i]);
	}
	
	bubble_sort(size,array);
	//print array
	for(int i = 0; i < size; i++){
		printf(" %d, ",array[i]);
	}
	return 0;
}