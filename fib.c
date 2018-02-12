#include<stdio.h>
int main()
{
int c=0,n,i,a,b;
scanf("%d",&n);
printf("1\t1\t");
a=1;\
b=1;
for(i=1;i<(n-1);i++)
{
c=a+b;
a=b;
b=c;
printf("%d\t",c);
}
return 0;
}
