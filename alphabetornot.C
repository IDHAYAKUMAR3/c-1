#include <stdio.h>
#include<string.h>
int main() 
{
char a;
scanf("%c",&a);
if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
{
printf("Alphabet");
}
else
{
printf("Not an alphabet");
}
return 0;
}
