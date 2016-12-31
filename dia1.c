#include<stdio.h>
int main()
{
	int a[10][10];
	int m,n,i,j;
	int temp,temp1;
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
			temp=a[0][n-1];
			a[0][n-1]=a[0][0];
			a[0][0]=temp;
			temp1=a[m-1][0];
			a[m-1][0]=a[m-1][n-1];
			a[m-1][n-1]=temp1;
			
		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
	
