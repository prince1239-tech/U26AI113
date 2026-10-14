#include<stdio.h>
int main()
{
	int num,sum,q;
	printf("enter a number\n");
	scanf("%d",&num);
	while(num>=10)
	{
		sum=0;
		while(num>0)
		{
		q=num%10;
		sum=sum+q;
		num=num/10;
		}
		num=sum;
	}
	printf("the sum of digit is %d",num);
}
