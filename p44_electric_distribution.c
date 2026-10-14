#include<stdio.h>
int main()
{
	float consumption,paidamt;
	printf("enter the value of consumption in unit\n");
	scanf("%f",&consumption);
	if(consumption>=0 && consumption<=200)
	{
		paidamt=0.50*consumption;
		printf("the amount paid by consumer is %f",paidamt);
	}
	else if(consumption>=210 && consumption<=400)
	{
		paidamt=0.65*consumption+100;
		printf("the amount paid by consumer is %f",paidamt);
	}
	else if(consumption>=401 && consumption<=600)
	{
		paidamt=0.80*consumption+230;
		printf("the amount paid by consumer is %f",paidamt);
	}
	else
	{
		paidamt=425+1.25*consumption;
		printf("the amount paid by consumer is %f",paidamt);
	}
}
