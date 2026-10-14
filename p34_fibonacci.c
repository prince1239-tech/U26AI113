#include<stdio.h>
main()
{
	int n,f,f1,f2,i;
	printf("enter the value of number of terms\n");
	scanf("%d",&n);
	f1=0;
	f2=1;
	printf("%d,%d,",f1,f2);
	for(i=0;i<=n-2;i++)
	{
		f=f1+f2;
		f1=f2;
		f2=f;
		printf("%d,",f);
	}
	printf("\b.",f);
}
