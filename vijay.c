#include<stdio.h>
void main()
{
	int a, b, s, t, u, v, w;
	a = 10;
	b = 2;
	
	s = a + b;
	t = a - b;
	u = a * b;
	v = a / b;
	w = a % b;
	
	printf("\nsum of %d and %d is %d", a, b, s);
	printf("\nsubtraction of % d and %d is %d", a, b, t);
	printf("\nmultipicaion of %d and %d is %d", a, b, u);
	printf("\ndivision of %d and %d is %d", a, b, v);
	printf("\nmodulo division of %d and %d is %d", a, b, w);
}
