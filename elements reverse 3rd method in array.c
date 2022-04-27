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
    for(i=0,j=n-1;i<n;i++,j--)
    {
        b[j]=arr[i]; 
	}
	for(i=0;i<n;i++)
    {
    	printf("%d ",b[i]);
	}
}
