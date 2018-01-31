#include<stdio.h>
#include<string.h>
int main()
{
char a;
int b,c;
scanf("%c",&a);
b=(a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
c=(a=='A'||a=='E'||a=='I'||a=='O'||a=='U');
if(b||c)
{
printf("Vowel");
}
else
{
printf("Consonant");
}
return 0;
}
