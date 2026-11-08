#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here (scop. comments)
   * Remember:
   * - you are not allowed to use the variable a
   * - you are not allowed to modify the variable p
   * - you can only write one statement
   * - you are not allowed to use ,
   * - you are not allowed to code anything else than this line
   * - your code should be written at line 19, before the ;
   * - do not remove anything from the initial code
   * - don't change anything but the line of code you are adding
   */
  *(p + 5) = 98; /* السطر المطلوبة إضافته */
  printf("a[2] = %d\n", a[2]);
  return (0);
}
