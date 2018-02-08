#include<stdio.h>
int main()
{
int a,b,c,d,x,y;
scanf("%d%d",&a,&b);
scanf("%d%d",&c,&d);
if(b<d)
{
b=b+60;
x=b-d;
a--;
y=a-c;
}
else
{
y=a-c;
x=b-d;
}
printf("%d\t%d",y,x);
return 0;
}
