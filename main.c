#include <stdio.h>
#define LIMIT 10

int main()
{
static int i = 0;

while (i < LIMIT)
{
  printf("main() call #%d\n", ++i);
  main();
}

return 0;
}
