#include<stdio.h>
int main()
{
	int num,q,sum,tamp;
	sum=0;
	printf("enter a number\n");
	scanf("%d",&num);
	tamp=num;
	while(num!=0)
	{
		q=num%10;
		sum=sum+q*q*q;
		num=num/10;
	}
	if(tamp==sum)
	printf("number is armstrong");
	else
	printf("number is not armstrong");
}
