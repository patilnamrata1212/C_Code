#include <stdio.h>

//armstrongNumber is the number when we do cube of each digit and add then we get same number
// ex : a = 153 , (1 raise to 3) +   (5 raise to 3) +   (3 raise to 3) = 1 + 125 + 27 = 153 
// 153 is armstrongNumber
int
main ()
{
  int a = 153, armstrongNumber = 0;
  int lastdigit = 0;
  int backup = a;
  while (a > 0)
    {
      lastdigit = a % 10;
      armstrongNumber += (lastdigit * lastdigit * lastdigit);
      a = a / 10;
    }
  if (backup == armstrongNumber)
    {
      printf ("Given number is armstrongNumber");
    }
  else
    printf ("Given number is not armstrongNumber");
  return 0;
}
