// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insertEnd(struct Node **head, int data) {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data; node->next = NULL;
    if (!*head) { *head = node; return; }
    struct Node *cur = *head;
    while (cur->next) cur = cur->next;
    cur->next = node;
}

void deleteNode(struct Node **head, int key) {
    struct Node *cur = *head, *prev = NULL;
    while (cur && cur->data != key) { prev = cur; cur = cur->next; }
    if (!cur) { printf("Not found\n"); return; }
    if (!prev) *head = cur->next;
    else prev->next = cur->next;
    free(cur);
    printf("Deleted %d\n", key);
}

void display(struct Node *head) {
    while (head) { printf("%d -> ", head->data); head = head->next; }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;
    insertEnd(&head, 10); insertEnd(&head, 20); insertEnd(&head, 30); insertEnd(&head, 40);
    display(head);
    deleteNode(&head, 20);
    display(head);
    return 0;
}
