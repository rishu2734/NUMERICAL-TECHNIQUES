#include<stdio.h>
#include<conio.h>
float f(float x)	{
	return(1/(1+x));
	}
void main()	{
	int i, n;
	float x0, xn, h, y[20], s0, se, ans, x[20];
	clrscr();
	printf("\nenter the value of x0, xn and h:");
	scanf("%f%f%f", &x0, &xn, &h);
	n=(xn-x0)/h;
	if (n%2==1)	{
		n=n+1;
		}
	h=(xn-x0)/n;
	printf("\nrefined value of n and h are: %d and %f\n", n, h);
	printf("\n Y values:\n");
	for (i=0; i<=n; i++)	{
	      x[i]=x0+i*h;
	      y[i]=f(x[i]);
	      printf("\n%f\n", y[i]);
	      }
	s0=0;
	se=0;
	for (i=1; i<n; i++)	{
		if (i%2==1)	{
			s0=s0+y[i];
			}
		else	{
			se=se+y[i];
			}
		}
	ans=h/3*(y[0]+y[n]+4*s0+2*se);
	printf("\nFinal Integration is %f", ans);
	getch();
}