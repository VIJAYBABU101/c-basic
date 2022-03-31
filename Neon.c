#include<stdio.h>
int main()
{
	int n, r, ds=0;
	scanf("%d",&n);
	int s=n*n;
	while(s>0)
	{
	r=s%10;
	ds=ds+r;
	s=s/10;
	}
	if(ds==n)
	{
	printf("Neon Number");
	}
	else
	{
	    printf("Not Neon Number");
	}
}
