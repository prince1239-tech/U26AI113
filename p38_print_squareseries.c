#include<stdio.h>
int main()
{
	int N,i,x;
	printf("enter the value of N\n");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		x=i*i;
		printf("%d,",x);
	}
	printf("\b.",x);
}
