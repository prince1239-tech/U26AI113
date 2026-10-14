#include<stdio.h>
int main()
{
	int num,q,sum;
	sum=0;
	printf("enter a number\n");
	scanf("%d",&num);
	while(num!=0)
	{
		q=num%10;
		sum=sum+q;
		num=num/10;
	}
	printf("the sum of digit in number is : %d",sum);
}
