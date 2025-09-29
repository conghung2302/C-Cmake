#include "bar.h"
#include "calculator.h"
#include "foo.h"
#include <stdio.h>

int main() {
  printf("Calling foo and bar functions:\n");
  foo();
  bar();

  printf(" %d \n", power(2, 8));
  return 0;
}
