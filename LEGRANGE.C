#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()	{
	int i, j, n;
	float q[10], w[10], x, sum=0;
	clrscr();
	printf("\nenter the value of n:");
	scanf("%d", &n);
	for (i=0; i<=n; i++)	{
		printf("\nENTER THE VALUE OF ARRAY1:");
		scanf("%f", &q[i]);
		}
	for (i=0; i<=n; i++)	{
		printf("\nENTER THE VALUE OF ARRAY2:");
		scanf("%f", &w[i]);
		}
	printf("\nENTER THE VALUE OF X:");
	scanf("%f", &x);
	for (i=0; i<=n; i++)	{
		float frac=1;
		for (j=0; j<=n; j++)	{
			if (i!=j)	{
				frac=frac*(x-q[j])/(q[i]-q[j]);
				}
			}
		sum=frac*w[i];
	}
	printf("\nsum: %f", sum);
	getch();
}