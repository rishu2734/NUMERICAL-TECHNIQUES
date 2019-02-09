#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	return (cos(x)-x*exp(x));
}
void main()
{
	int i;
	float a, b, c, x;
	clrscr();
	printf("\nenter the value of A and B:");
	scanf("%f %f", &a, &b);
	if (f(a)*f(b)<0)	{
		c=(a+b)/2;
		for (i=0; i<=10; i++)	{
			c=(a*f(b)-b*f(a))/(f(b)-f(a));
			if (f(c)*f(a)<0)	{
				b=c;
			}
			else	{
				a=c;
			}
		}
	printf("\nthe roots is %f", c);
	}
getch();
}
