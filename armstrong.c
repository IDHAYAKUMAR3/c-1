#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c=0,i,d;
scanf("%d",&a);
d=a;
for(i=1;a>10;i++)
{
b=a%10;
a=a/10;
c=c+pow(b,3);
}
c=c+pow(a,3);
if(d==c)
{
printf("YES");
}
else
{
printf("NO");
}
return 0;
}
