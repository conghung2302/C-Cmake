#include <stdio.h>
#include <calculator.h>


int sum(int a, int b) {
    return a + b;
}


int power(int a, int b) {
    int ans = 1;
    for (int i = 0; i < b; i++) {
        ans *= a;
    }

    return ans;
}
