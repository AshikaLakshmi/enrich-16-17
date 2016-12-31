#include<stdio.h>
int main()
{
	int a[10][10];
	int m,n,i,j;
	printf("Enter the m and n");
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if((i==0)||(i==m-1)||(j==0)||(j==n-1))
			{
				a[i][j]=1;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
			printf("\t");
		}
		printf("\n");
	}
}
