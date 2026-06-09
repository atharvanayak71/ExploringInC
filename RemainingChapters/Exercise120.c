// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *createNode(int data) {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void insertFront(struct Node **head, int data) {
    struct Node *node = createNode(data);
    node->next = *head;
    *head = node;
}

void display(struct Node *head) {
    while (head) { printf("%d -> ", head->data); head = head->next; }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;
    insertFront(&head, 30);
    insertFront(&head, 20);
    insertFront(&head, 10);
    display(head);
    return 0;
}
