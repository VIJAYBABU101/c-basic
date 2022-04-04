#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,edc=0,odc=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r%2==0) edc++;
		else odc++;
		n=n/10;
	}
	if(odc==0)
	printf("complete even");
	else if(edc==0)
	printf("complete odd");
	else
	printf("mixed");
}
