#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  if(a>=0)
  {
    if(a>0)
    {
      printf("POSITIVE");
    }
    else
    {
      printf("ZERO");
    }
  }
  else
  {
    printf("NEGATIVE");
  }
  return 0;
}
  
