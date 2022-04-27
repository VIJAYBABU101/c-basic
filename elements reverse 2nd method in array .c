#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
    }
    int b[n];
    for(i=n-1,j=0;i>=0;i--,j++)
    {
        b[j]=arr[i]; 
	}
	for(i=0;i<n;i++)
    {
    	printf("%d ",b[i]);
	}
}
