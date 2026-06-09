// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void insertSorted(struct Node **head, int data) {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    if (!*head || (*head)->data >= data) {
        node->next = *head;
        *head = node;
        return;
    }
    struct Node *cur = *head;
    while (cur->next && cur->next->data < data) cur = cur->next;
    node->next = cur->next;
    cur->next = node;
}

void display(struct Node *head) {
    while (head) { printf("%d -> ", head->data); head = head->next; }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;
    int vals[] = {5, 1, 8, 3, 7, 2};
    for (int i = 0; i < 6; i++) {
        insertSorted(&head, vals[i]);
        printf("After inserting %d: ", vals[i]);
        display(head);
    }
    return 0;
}
