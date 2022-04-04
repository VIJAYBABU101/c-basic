#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,sum=0,sqr_sum=0,cube_sum=0,giant_sum=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		sqr_sum=sqr_sum+r*r;
		cube_sum=cube_sum+r*r*r;
		giant_sum=giant_sum+sum+sqr_sum+cube_sum;
		n=n/10;
	}
    giant_sum=sum+sqr_sum+cube_sum;
	printf("sum of digits:%d\n",sum);
	printf("sum of square of digits:%d\n",sqr_sum);
	printf("sum of cubes of digits",cube_sum);
	printf("giant_sum is:%d",giant_sum);
	
}
