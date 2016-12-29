include<stdio.h>
int main()
{
  int a,rev=0;
  scanf("%d",&a);
  while(a!=0)
  {
    rev=rev*10+a%10;
    a=a/10;
  }
  if(rev==a)
  {
  printf("The number is a palindrome");
  }
  else
  {
  printf("The number is not a palindrome");
  }
 } 
