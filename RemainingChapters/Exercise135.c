// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char data[50];
    struct Node *next;
};

struct Node *top = NULL;

void push(char *val) {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    strcpy(node->data, val);
    node->next = top;
    top = node;
}

char *pop() {
    if (!top) return NULL;
    struct Node *t = top;
    static char val[50];
    strcpy(val, t->data);
    top = top->next;
    free(t);
    return val;
}

int main() {
    push("first"); push("second"); push("third");
    printf("Popping from stack:\n");
    char *s;
    while ((s = pop()) != NULL) printf("  %s\n", s);
    return 0;
}
