int factorial(int n)
{
    static int ret =1;
    ret *= n; 
    if (n <= 1)
    {
       printf("%d",ret);
      return 0;
    }
    factorial(n-1);
}
 
int main ()
{
  int n = 4;
  factorial(n);
  return 0;
}


// Another  approch 
#include <stdio.h>
int factorial(int n)
{
    if (n <= 1)
    {
      return 1;
    }
    return n*factorial(n-1);
}
 
int main ()
{
  int n = 5;
  printf("%d",factorial(n));
  return 0;
}
