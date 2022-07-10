#include<stdio.h>
#include "myutil1.h"
#include "myutil2.h"

int main()
{

  int m=0;
  int n=0;
  int k = 0;

  m = foo(10);
  n = bar(11);
  k = bar(12);

  printf("%d %d\n", m ,n);
  return 0;
}
