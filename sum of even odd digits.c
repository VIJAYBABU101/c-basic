#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,eds=0,ods=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r%2==0) eds=eds+r;
		else ods=ods+r;
		n=n/10;
	}
	printf("sum of even digits:%d\n",eds);
	printf("sum of odd digits:%d",ods);
}
