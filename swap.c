#include<stdio.h>
int main()
{
int a,t,b;
scanf("%d%d",&a,&b);
t=a;
a=b;
b=t;
printf("%d\t%d",a,b);
return 0;
}
