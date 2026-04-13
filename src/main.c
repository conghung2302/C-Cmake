#include <stdio.h>
#include "linkedlist.h"
int main() {

    Node *node = NULL;

    int a = 10;
    int b = 11;
    int c = 12;
    int c1 = 13;
    int c2 = 14;

    float f1 = 1.4;
    float f2 = 2.4;
    float f3 = 3.4;
    float f4 = 4.4;
    float f5 = 5.4;

    // node = push(node, &a);
    // node = push(node, &b);
    // node = push(node, &c);
    // node = push(node, &c1);
    // node = push(node, &c2);

    node = push(node, &f1);
    node = push(node, &f2);
    node = push(node, &f3);
    node = push(node, &f4);
    node = push(node, &f5);

    node = pop(node);
    show(node, print_float);
    return 0;
}
