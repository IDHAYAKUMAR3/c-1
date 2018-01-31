#include <stdio.h>
#include<string.h>
int main() 
{
char z;
scanf("%c",&z);
if((z>='a'&&z<='z')||(z>='A'&&z<='Z'))
{
printf("Alphabet");
}
else
{
printf("Not an alphabet");
}
return 0;
}
