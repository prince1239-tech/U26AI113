#include<stdio.h>
int main()
{
	float commision,amount;
	printf("enter the value of sales amount\n");
	scanf("%f",&amount);
	if(amount<=500)
	{
		commision=0.05*amount;
		printf("the value of commision is %f",commision);
	}
	else if(amount>500 && amount<=2000)
	{
		commision=0.1*amount+35;
		printf("the value of commision is %f",commision);
	}
	else if(amount>2000 && amount<=5000)
	{
		commision=0.12*amount+185;
		printf("the value of commision is %f",commision);
	}
	else if(amount>5000)
	{
		commision=0.125*amount;
		printf("the value of commision is %f",commision);
	}	
	else
	printf("no commision");
}
