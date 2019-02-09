#include<stdio.h>
#include<conio.h>
float fun(float x, float y)	{
	float f;
	f=x+y;
	return f;
	}
void main()	{
	float a,b,x,y,h,t,k;
	clrscr();
	printf("\nenter x0, y0, h, xn:");
	scanf("%f%f%f%f", &a, &b, &h, &t);
	x=a;
	y=b;
	printf("\nx\ty\n");
	while(x<=t)	{
		k=h*fun(x,y);
		y=y+k;
		x=x+h;
		printf("%0.3f\t%0.3f\n", x, y);
		}
	getch();
	}
