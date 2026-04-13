#include "linkedlist.h"
#include <stdio.h>

Node *create_node(void *data) {
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->next= NULL;
    return node;
}

Node* push(Node *head, void *data) {
    Node *node = create_node(data);
    if (head == NULL) {
        head = node;
        return head;
    }      

    Node *tmp = head;
    while(tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = node;
    return head;
}

void print_int(void *data) {
    printf("%d ->", *(int*)data);
}

void print_float(void *data) {
    printf("%f ->", *(float*)data);
}

Node* pop(Node *head) {
    Node *tmp = head;
    while(tmp->next->next != NULL)
        tmp = tmp->next;
    
    Node *del = tmp;
    free(del->next);
    del->next = NULL;

    return head;
}

void show(Node *head, PrintFunc print) {
    Node *tmp = head;
    while(tmp!= NULL) {
        print(tmp->data);
        tmp = tmp->next; 
    }
}
