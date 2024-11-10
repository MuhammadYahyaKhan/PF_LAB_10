#include<stdio.h>
#include<string.h>
int change(char string[],int a){
	int b = a;
	printf("%c",string[b]);
	if(b == 0){
		return 0;
	}
	change(string, b-1 );
}


int main(){
	char string[100];
	scanf("%[^\n]s", &string);
	
	change(string, strlen(string) - 1 );
	
	
	return 0;
}