#include<stdio.h.
int main()
{
int j=1,n,a[20],i,c;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>a[j])
{
c=a[i];
}
else
{
c=a[j];
}
j++;
}
printf("%d",c);
return 0;
}
