#include<stdio.h>
int main()
{
	float x,p;
	int i,sum,y;
	printf("Enter the cost of the coffee and the discount obtained");
	scanf("%f %f",&x,&p);
	sum=0;
	for(i=1;i<20;i++)
		{
			sum=(x/p*100);
		}
	printf("Total price to be paidis %d\n",sum);
	return 0;
}
