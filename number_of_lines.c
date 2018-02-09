#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int i,s=1;
gets(a);
for(i=0;i<a[i];i++)
{
	if(a[i]=='.')
	{
		++s;
	}
}
printf("%d",s);
return 0;
}
