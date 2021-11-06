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
	
	printf("\n\nsum of %d and %d is %d", a, b, s);
	printf("\n\nsubtraction of % d and %d is %d", a, b, t);
	printf("\n\nmultipicaion of %d and %d is %d", a, b, u);
	printf("\n\ndivision of %d and %d is %d", a, b, v);
	printf("\n\nmodulo division of %d and %d is %d", a, b, w);
}
