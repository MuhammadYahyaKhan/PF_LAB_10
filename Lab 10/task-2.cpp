#include<stdio.h>

int split(int n, int b){
	float c = (b/100.0) * n;
	if(b>100){
		return 0;
	}
	printf("%d percent = %f\n",b,c);
	split(n,b+1);
}

int main(){
	
	int n; printf("Enter the value to split in percentage : "); scanf("%d",&n);
	int b = 1;
	split(n,b);
	
	return 0;
}