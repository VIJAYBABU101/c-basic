#include<stdio.h>
int main()
{
	int r1,r2,r3,r4,r5;
	float avg;
	scanf("%d%d%d%d%d",&r1,&r2,&r3,&r4,&r5);
	avg = (float)(r1+r2+r3+r4+r5)/5;
	printf("Average Speed:%.2f\n,avg");
	if(r1>avg)
	printf("r1 is qualified\n");
	if(r2>avg)
	printf("r2 is qualified\n");
	if(r3>avg)
	printf("r3 is qualified\n");
	if(r4>avg)
	printf("r4 is qualified\n");
	if(r5>avg)
	printf("r5 is qualified\n");
	return 0;
}
