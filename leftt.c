#include<stdio.h>
int main()
{
  int a,b,rem,i,m;
  printf("Enter the number :");
  scanf("%d",&a);
  printf("Enter the number of left shift:");
  scanf("%d",&m);
  for(i=0;i<m;i++)
  {
    rem=a%10;
    b=a/10;
    if(rem!=0)
    {
      a=(10000*rem)+b;
    }
    else
    {
      a=b;
    }
  }
  printf("%d",a);
}
