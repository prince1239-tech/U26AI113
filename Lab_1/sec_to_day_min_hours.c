#include<stdio.h>
main()
{	float sec,days,hours,minutes;
	printf("enter the period of revolution of earth in seconds :");
	scanf("%f" , &sec);
	printf("the period of revolution of earth in minutes : %f \n" , sec/60);
	printf("the period of revolution of earth in hours : %f \n" , sec/3600);
	printf("the period of revolution of earth in days : %f \n" , sec/86400);
}
