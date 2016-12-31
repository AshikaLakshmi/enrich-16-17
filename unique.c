#include<stdio.h>
#include<string.h>
int main()
{
	char word[100]={0};
	int i,j,flag,k=0;
	scanf("%s",word);
	int length=strlen(word);
	char temp[100]={0};
	for(i=0;i<length;i++)
	{
		flag=0;
		for(j=0;j<i;j++)
		{
			if(word[i]==word[j])
			{
			 flag++;
			}
		}
		if(flag==0)
		{
			temp[k++]=word[i];
		}
	}
	printf("%s",temp);
}
