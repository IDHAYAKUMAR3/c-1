#include,stdio.h.
int main(0
{
int n,a[20],i,c;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
c=a[0]<a[i]?a[0]:a[i];
}
printf("%d",c);
return 0;
}
