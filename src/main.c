#include <stdio.h>
#include "foo.h"
#include "bar.h"
#include "calculator.h"

int main() {
    printf("Calling foo and bar functions:\n");
    foo();
    bar();

    printf(" %d \n", power(2, 4));
    return 0;
}
