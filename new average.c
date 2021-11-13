#include<stdio.h>
void main()
{
	int a, n, p, N;
	printf("enter the average of 10 numbers is:");
	scanf("%d", &a);
	printf("number of observations is:");
	scanf("%d", &n);
	printf("each of the number is multipied by:");
	scanf("%d", &p);
	N = (a*n*p)/10;
	printf("the new average is %d", N);
}
