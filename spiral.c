#include <stdio.h>

int main(void) {
	int n,i,j,k=1;
	int a[10][10];
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=n;j++)
	    {
	        a[i][j]=k;
	        k++;
	    }
	}
	for(i=1;i<=n;i++)
	{
	     if((i%2)!=0)
	     {
	        for(j=1;j<=n;j++)
	        {
	            printf("%d\t",a[i][j]);
	        }
	         printf("\n");
	    }
	    else
	    {
	        for(j=n;j>0;j--)
	        {
	            printf("%d\t",a[i][j]);
	        }
	         printf("\n");
	    }
	}
	return 0;
}
