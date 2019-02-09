#include<stdio.h>
#include<conio.h>
float function(float temp)	{
	return(1/(1+temp*temp));
	}
void main()	{
	int count, interval;
	float lower_bound, upper_bound, h, sum=0, value;
	clrscr();
	printf("\nenter the value of lower bound:");
	scanf("%f", &lower_bound);
	printf("\nenter the value of the upper bound:");
	scanf("%f", &upper_bound);
	printf("\nenter interval limit:\n");
	scanf("%d", interval);
	h=(upper_bound-lower_bound)/interval;
	sum=function(lower_bound)+function(upper_bound);
	for (count=1; count<interval; count++)	{
		if (count%3==0)	{
			sum=sum+2*function(lower_bound+count*h);
			}
		else	{
			sum=sum+3*function(lower_bound+count*h);
			}
		}
	value=(3*h/8)*sum;
	printf("\nvalue of simpsons 3/8 rule of integration is :\t%f\n", value);
	getch();
}
