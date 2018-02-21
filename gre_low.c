#include<stdio.h>
int main()
{
int i,n,x=0,y=0,a[50];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(x<=a[i])
{
x=a[i];
}
}
y=a[0];
for(i=0;i<n;i++)
{
if(y>=a[i])
{
y=a[i];
}
}
printf("%d\t%d",y,x);
return 0;
}
