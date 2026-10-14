#include<stdio.h>
int main()
{
	int N,i;
	printf("enter the N\n");
	scanf("%d",&N);
	for(i=1;i<=N;i+=2)
	{
		printf("%d,",i);
	}
	printf("\b.",i);
}

