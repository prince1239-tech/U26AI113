#include<stdio.h>
int main()
{
	int num,i;
	printf("enter a number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			printf("%d,",i);
		}
	}
	printf("\b.");
	return 0;
}
