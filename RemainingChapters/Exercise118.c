// Atharva Nayak
// 0905CS241063
#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) { stack[++top] = c; }
char pop() { return stack[top--]; }
int isEmpty() { return top == -1; }

int isBalanced(char *expr) {
    for (int i = 0; expr[i]; i++) {
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[')
            push(expr[i]);
        else if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']') {
            if (isEmpty()) return 0;
            char c = pop();
            if ((expr[i]==')' && c!='(') || (expr[i]=='}' && c!='{') || (expr[i]==']' && c!='['))
                return 0;
        }
    }
    return isEmpty();
}

int main() {
    char expr[100];
    printf("Enter expression: ");
    scanf("%s", expr);
    printf("Parentheses are %s\n", isBalanced(expr) ? "balanced" : "NOT balanced");
    return 0;
}
