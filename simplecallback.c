#include <stdio.h>


typedef int (*funcPtr) (int, int);

//callback func ptr
funcPtr gCall;

// callback register
void registerCallback (funcPtr p)
{
  if (p != NULL)
    gCall = p;
}

void deregisterCallback ()
{
  gCall = NULL;
}

//execute callback
void executeCall (int a, int b)
{
  if (gCall != NULL)
    {
      int ans = gCall (a, b);
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

  registerCallback (add);

  executeCall (10, 5);
  
  deregisterCallback ();

  executeCall (11, 1);

  return 0;
}
