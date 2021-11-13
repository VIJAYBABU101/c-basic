#include<stdio.h>
void main()
{
	int p, t;
	float r, si;
	printf("principal value :");
	scanf("%d", &p);
	printf("time in years :");
	scanf("%d", &t);
	printf("rate of interest :");
	scanf("%f", &r);
	si = p*t*r/100;
	printf("\n\rsimple interest is %f", si);
}
