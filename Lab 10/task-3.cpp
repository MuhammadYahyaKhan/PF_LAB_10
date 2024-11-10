#include<stdio.h>
	struct cars{
		char make[100][100];
		char model[100][100];
		float price[100];
		float milage[100];
		int year[100];
	
};
int main(){
	char terminate = 'c';	
	struct cars s1;
	int index = 0;
	while(terminate == 'c'){
		printf("press p for previous records and n to enter a new record\n");
		char operation;
		scanf("%c",&operation);
		if(operation == 'n'){
			printf("Make : "); scanf("%s",&s1.make[index]);
			printf("Model : "); scanf("%s",&s1.model[index]);
			printf("Price : "); scanf("%f",&s1.price[index]);
			printf("milage : "); scanf("%f",&s1.milage[index]);
			printf("Year : "); scanf("%d",&s1.year[index]);
			index++;
		}else if(operation == 'p'){
			int record_index = 0;
			
			printf("Enter the index : "); scanf("%d",&record_index);
			printf("Make : %s\nModel : %s\nPrice : %f\nMileage : %f\nYear : %d\n",s1.make[record_index], s1.model[record_index],s1.price[record_index],s1.milage[record_index],s1.year[record_index]);
		}
		
	}
	return 0;
}