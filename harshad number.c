#include<stdio.h>
int main()
{
	int n, r, sum=0;
	scanf("%d",&n);
	int t=n;
	while(n>0)
	{
	r=n%10;
	sum=sum+r;
	n=n/10;
	}
	if(t%sum==0)
	{
	printf("Harshad Number");
	}
	else
	{
	    printf("Not Harshad Number");
	}
}
