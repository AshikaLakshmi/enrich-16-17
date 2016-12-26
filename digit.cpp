int main()
{
   int n,sum=0,count=0,a;
   printf("Enter the number :");
   scanf("%d",&n);
   printf("\n");
   while(n>0)
   {
       a=n%10;
       sum=sum+a;
       n=n/10;
       count++;
   }
   printf("The sum of the digits is %d",sum);
   printf("\nThe number of digits in the number is %d",count);
   return 0;
}
