#include<stdio.h>
int main()
{
int i,a;
scanf("%d",&a);
for(i=0;(a-60)>0;i++)
{
if((a-60)>0)
{
a=a-60;
}
}
printf("%d\t%d",i,a);
return 0;
}
