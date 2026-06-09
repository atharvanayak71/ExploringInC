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

struct Node *reverseList(struct Node *head) {
    struct Node *prev = NULL, *cur = head, *next = NULL;
    while (cur) { next = cur->next; cur->next = prev; prev = cur; cur = next; }
    return prev;
}

void display(struct Node *head) {
    while (head) { printf("%d -> ", head->data); head = head->next; }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;
    for (int i = 1; i <= 5; i++) insertEnd(&head, i * 10);
    printf("Original: "); display(head);
    head = reverseList(head);
    printf("Reversed: "); display(head);
    return 0;
}
