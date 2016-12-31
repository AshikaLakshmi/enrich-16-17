#include<stdio.h>
int main()
{
	int a[100],n,k;
	int count=0;
	int i;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the value:");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			count++;
		}
	}
	printf("The number %d occured %d times",k,count);
}
	
