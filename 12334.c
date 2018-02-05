#include<stdio.h>
int main()
{
int a,b,c,i,j,d;
scanf("%d%d",&a,&b);
for(i=1;i<=a;i++)
{
b=i/2;
for(j=2;j<=b;j++)
{
if(a%j==0)
{
d=1;
break;
}
}
if(d==0)
printf("%d",i);
return 0;
}
