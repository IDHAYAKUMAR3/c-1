#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int i,x=0,s=0;
gets(a);
for(i=0;i<a[i];i++)
{
	if(a[i]>90)
	{
		s++;
	}
  else
  {
    x++;
  }
}
printf("%d",x+1);
return 0;
}
