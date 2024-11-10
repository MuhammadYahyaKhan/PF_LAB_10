#include<stdio.h>

int digit_sum(int n,int sum){
	if(n==0){
		return sum;
	}
	int last_digit = n%10;
	sum = sum + last_digit;
	n = n / 10;
	digit_sum(n,sum);
}


int main(){
	int n;printf("Enter the number : ");scanf("%d",&n);
	int sum = 0;
	printf("%d",digit_sum(n,sum));
	
	return 0;
}