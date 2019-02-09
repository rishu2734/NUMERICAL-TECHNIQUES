#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	return(pow(x,4)-x-10);
}
float df(float x)
{
	return(4*(pow(x,3))-1);
}
void main()
{
	int i;
	float a, b, c, x;
	clrscr();
	printf("\nenter the vlues of a and b:");
	scanf("%f %f", &a, &b);
	c=(a+b)/2;
	for (i=0; i<10; i++)	{
		x=c-(f(c)/df(c));
		printf("\nvalues of estimeated roots are: %f", x);
		c=x;
	}
getch();
}