#include<stdio.h>

#define MACRO1  33
#define MACRO2(N) (MACRO1+(N)+1)
int main()
  {
  int i = 0;
  for (i = 0; i < 5; i++)
    {
    int x = MACRO2(i);
    printf("%d\n",x);
    }
  return 0;
  }
