#include <stdio.h>
#include <stdarg.h>

int sum (int cnt,...) 
{
    va_list ap;
    int i, n;
    va_start(ap, cnt);
    n = 0;
    for (i = 0; i < cnt; i++)
    {
        n += va_arg(ap, int);
    }
    va_end(ap);
    return n;
}
int main() {
  
  printf("%d\n", sum(2, 2, 3));
  printf("%d", sum(3, 1, 2, 3));
  return 0;
}