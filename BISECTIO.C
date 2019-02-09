#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	return(pow(x,3)+pow(x,2)+x+7);
}
void main()
{
	int i;
	float a, b, c;
	clrscr();
	printf("enter the values of A and B\n");
	scanf("%f%f", &a, &b);
	do
	{
		c=(a+b)/2;
		if (f(a)*f(c)<0)	{
			b=c;
		}
		else	{
			a=c;
		}
		printf("\nroot of %d iteration is %f", i, c);
		i++;
	}while(fabs(f(c))>0.0001);
	getch();
}