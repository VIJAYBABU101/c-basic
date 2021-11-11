#include<stdio.h>
void main()
{
	int l, w, a, p;
	printf("enter the values of l, w");
	scanf("%d%d", &l, &w);
	a = l*w;
	p = 2*(l+w);
	printf("area of the rectangle is %d\n", a);
	printf("perimeter of the rectangle is %d", p);
}
