#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int i,s=0;
gets(a);
for(i=0;i<a[i];i++)
{
	if(a[i]=='9'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8')
	{
		s++;
	}
}
printf("%d",s);
return 0;
}
