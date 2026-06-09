// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int detectCycle(struct Node *head) {
    struct Node *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return 1;
    }
    return 0;
}

int main() {
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n4 = (struct Node *)malloc(sizeof(struct Node));
    head->data = 1; n2->data = 2; n3->data = 3; n4->data = 4;
    head->next = n2; n2->next = n3; n3->next = n4; n4->next = NULL;
    printf("Without cycle: %s\n", detectCycle(head) ? "Cycle detected" : "No cycle");
    n4->next = n2;
    printf("With cycle:    %s\n", detectCycle(head) ? "Cycle detected" : "No cycle");
    n4->next = NULL;
    free(head); free(n2); free(n3); free(n4);
    return 0;
}
