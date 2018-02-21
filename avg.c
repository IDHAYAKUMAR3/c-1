#include<stdio.h>
int main()
{
int a[40],n,i,x=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
x=x+a[i];
}
x=x/n;
printf("%d",x);
return 0;
}
