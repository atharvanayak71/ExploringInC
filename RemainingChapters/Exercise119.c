// Atharva Nayak
// 0905CS241063
#include <stdio.h>

#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int val) {
    if (rear == MAX - 1) { printf("Queue full\n"); return; }
    if (front == -1) front = 0;
    queue[++rear] = val;
    printf("Enqueued %d\n", val);
}

int dequeue() {
    if (front == -1 || front > rear) { printf("Queue empty\n"); return -1; }
    return queue[front++];
}

void display() {
    if (front == -1 || front > rear) { printf("Queue is empty\n"); return; }
    printf("Queue: ");
    for (int i = front; i <= rear; i++) printf("%d ", queue[i]);
    printf("\n");
}

int main() {
    enqueue(10); enqueue(20); enqueue(30);
    display();
    printf("Dequeued: %d\n", dequeue());
    display();
    return 0;
}
