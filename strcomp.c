#include<stdio.h>
#include<string.h>
int main()
{
char a[20],b[20];
int x,y;
scanf("%s%s",&a,&b);
x=strlen(a);
y=strlen(b);
if(x>=y)
printf("%s",a);
else
printf("%s",b);
return 0;
}
