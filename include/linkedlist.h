#include <stdlib.h>

#ifndef LINKEDLIST_H 
#define LINKEDLIST_H 

typedef struct Node {
    void *data;
    struct Node *next;
} Node;

typedef void (*PrintFunc)(void *data);

Node* create_node(void *data);


Node* push(Node *head, void *data);
Node* pop(Node *head);

void show(Node *head, PrintFunc print);

void print_int(void *data);
void print_float(void *data);

#endif
