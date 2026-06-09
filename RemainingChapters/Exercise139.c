// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL, *rear = NULL;

void enqueue(int val) {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = val; node->next = NULL;
    if (!rear) { front = rear = node; return; }
    rear->next = node; rear = node;
    printf("Enqueued %d\n", val);
}

int dequeue() {
    if (!front) { printf("Queue empty\n"); return -1; }
    int val = front->data;
    struct Node *t = front;
    front = front->next;
    if (!front) rear = NULL;
    free(t);
    return val;
}

void display() {
    struct Node *cur = front;
    printf("Queue: ");
    while (cur) { printf("%d ", cur->data); cur = cur->next; }
    printf("\n");
}

int main() {
    enqueue(10); enqueue(20); enqueue(30);
    display();
    printf("Dequeued: %d\n", dequeue());
    display();
    return 0;
}
