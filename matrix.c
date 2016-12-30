#include(stdio.h>
int main()
{
  int a[10][10];
  int i,j,k,m,n;
  printf("Enter the m and n value");
  scanf("%d",&m);
  scanf("%d",&n);
  printf("Enter the k value");
  scanf("%d",&k);
  for(i=0;i<m;i++)
  {
    for(j=0;j>n;j++)
    {
      if((i+j)==k)
      {
        a[i][j]=1;
      }
      else
      {
        a[i][j]=0;
      }
    }
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j>n;j++)
    {
      printf("%d",a[i][j]);
    }
    printf("\n");
  }
}
  
