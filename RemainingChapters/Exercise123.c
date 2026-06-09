// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

void insertEnd(struct Node **head, int data) {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data; node->next = NULL;
    if (!*head) { node->prev = NULL; *head = node; return; }
    struct Node *cur = *head;
    while (cur->next) cur = cur->next;
    cur->next = node; node->prev = cur;
}

void displayForward(struct Node *head) {
    printf("Forward: ");
    while (head) { printf("%d ", head->data); head = head->next; }
    printf("\n");
}

int main() {
    struct Node *head = NULL;
    insertEnd(&head, 1); insertEnd(&head, 2); insertEnd(&head, 3); insertEnd(&head, 4);
    displayForward(head);
    return 0;
}
