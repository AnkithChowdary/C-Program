#include <stdio.h>
#include <ctype.h>

char a[100];
int top = -1;

int pop() {
    return a[top--];
}

void push(char x) {
    a[++top] = x;
}

int priority(char z) {
    if (z == '+' || z == '-')
        return 0;
    else if (z == '^')
        return 2;
    else if (z == '*' || z == '/')
        return 1;
    else
        return -1; // Default case
}

int main() {
    char s[100];
    printf("Enter an infix expression: ");
    scanf("%s", s); // Read until newline character
    char *p = s;
    char x;
    while (*p != '\0') {
        if (isspace(*p)) {
            p++; // Skip whitespace characters
            continue;
        }
        if (isalnum(*p))
            printf("%c", *p);
        else if (*p == '(')
            push(*p);
        else if (*p == ')') {
            while ((x = pop()) != '(')
                printf("%c", x);
        } else {
            while (priority(a[top]) >= priority(*p))
                printf("%c", pop());
            push(*p);
        }
        p++;
    }
    // Pop any remaining operators from the stack
    while (top != -1)
        printf("%c", pop());
    return 0;
}
