#include<stdio.h>
void main()
{
	int a, b, c;
	a = 10;
	b = 4;
	c = 2;
	a += b*c;
	b += a;
	a -= c;
	c *= b;
	b /= a;
	b *= a;
	c %= a;
	printf("%d\n%d\n%d", b, a, c);
}
