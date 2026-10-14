#include<stdio.h>
int main()
{
	int num,i;
	printf("enter a number\n");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0 && num!=1)
		{
			printf("it is a composite number",num);
			break;
	 }
		else
		{
			printf("it is a prime number",num);
			break;
		}
	}
	if(num==1)
	printf("it is a unique number",num);
	else if(num==2)
	printf("it is a prime number",num);
}
