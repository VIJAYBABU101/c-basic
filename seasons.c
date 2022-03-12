#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n==3 || n==4 || n==5)
	printf("summer season month");
	else if(n==6 || n==7 || n==8 || n==9)
	printf("rainy season month");
	else if(n==10 || n==11 || n==12)
	printf("winter season month");
	else
	printf("invalid number");
	return 0;
}
