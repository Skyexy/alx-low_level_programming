#include <stdio.h>

int main()
{
  int a = 1
  char b = 'a'
   
   for (a <= 16)
   {
    if (a <= 10)
    {
      putchar(a + '0')
    }
     if (a > 10)
     {
      putchar(b)
      b++
     }
    a++
   }
   return 0;
}
