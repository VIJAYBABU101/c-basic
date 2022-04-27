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
    int max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
		max=arr[i]; 
	}
	int count=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==max)
		count++;
	}
	if(count>0)
    {
    	printf("%d ",count);
	}
}
