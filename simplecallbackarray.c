#include <stdio.h>


typedef int (*funcPtr) (int, int);

//callback func ptr
funcPtr gCall[4];

// callback register
void registerCallback (funcPtr p, int idx)
{
  if (p != NULL)
    gCall[idx] = p;
}

void deregisterCallback (int idx)
{
  gCall[idx] = NULL;
}

//execute callback
void executeCall (int a, int b, int idx)
{
    if (gCall[idx] != NULL)
    {
      int ans = gCall[idx] (a, b);
      printf ("ans:%d\n\n", ans);
    }
}

int main ()
{
    int add (int a, int b)
    {
    return a + b;
    }
    int sub (int a, int b)
    {
    return a - b;
    }
    int mul (int a, int b)
    {
    return a * b;
    }
    
    registerCallback (add, 0);
    registerCallback (sub, 1);
    registerCallback (mul, 2);
    
    executeCall (10, 5, 0);
    executeCall (10, 5, 1);
    executeCall (10, 5, 2);
    executeCall (10, 5, 3);
    deregisterCallback (0);
    
    return 0;
}
