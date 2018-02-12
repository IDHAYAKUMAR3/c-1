#include<stdio.h>
int main()
{
int i,a[10],c;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<9;i++)
{
if(a[i]>a[i+1])
c=a[i];
else
c=a[i+1];
}
printf("%d",c);
}
