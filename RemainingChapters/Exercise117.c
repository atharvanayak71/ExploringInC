// Atharva Nayak
// 0905CS241063
#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int val) {
    if (top == MAX - 1) { printf("Stack overflow\n"); return; }
    stack[++top] = val;
    printf("Pushed %d\n", val);
}

int pop() {
    if (top == -1) { printf("Stack underflow\n"); return -1; }
    return stack[top--];
}

int peek() {
    if (top == -1) { printf("Stack is empty\n"); return -1; }
    return stack[top];
}

int main() {
    push(10); push(20); push(30);
    printf("Top element: %d\n", peek());
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());
    printf("Top element: %d\n", peek());
    return 0;
}
