#include<stdio.h>
#include<string.h>
int main()
{
	int a1=0,e1=0,i1=0,u1=0,o1=0;
	char word[100];
	int i;
	scanf("%s",word);
	int length=strlen(word);
	for(int i=0;i<length;i++)
	{
		if(word[i]=='a'||word[i]=='A')
		{
			a1++;
		}
		if(word[i]=='e'||word[i]=='E')
		{
			e1++;
		}
		if(word[i]=='i'||word[i]=='I')
		{
			i1++;
		}
		if(word[i]=='o'||word[i]=='O')
		{
			o1++;
		}
		if(word[i]=='u'||word[i]=='U')
		{
			u1++;
		}
	}
	
	printf("The number of a,e,i,o,u is %d%d%d%d%d",a1,e1,i1,o1,u1);
}
