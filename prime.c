//write a program to accept a number and check it is prime or not

#include<stdio.h>

int main(void)
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	
	int i=2;
	while(i<num){
		if(num%i==0){
			break;
		}
		i++;
	}
	if(i==num)
	{
		printf("%d number is prime",num);
	}
	else{
		printf("%d number is not prime",num);
	}
	return 0;
}
