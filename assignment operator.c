#include<stdio.h>
void main()
{
	int a, b;
	a = 12;
	b = 4;
	a += b;
	b += a;
	b %= a;
	a *= b*2;
	a /= b;
	printf("%d\n%d", a, b);
}
