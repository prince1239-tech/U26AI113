#include<stdio.h>
int main()
{
	int num,sum=0;
	printf("enter number\n");
	scanf("%d",&num);
	sum=num;
	if(sum>=0)
	{
	while(num>0)
	{
		printf("enter number\n");
		scanf("%d",&num);
		if(num<0)
		{
		break;
		}
		sum=sum+num;	
	}
	printf("the sum of the entered numbers is %d",sum);
	}
	return 0;
}
