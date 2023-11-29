#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define Size 20

char arr[Size];
struct stacks {
    int top;
} *s;

struct queues {
    int rear;
    int front;
} *q;

void push(char val) {
    if (s->top == Size - 1) {
        printf("Stack overflow");
        return;
    }
    arr[++(s->top)] = val;
}

char pop() {
    if (s->top == -1) {
        printf("Stack underflow");
        return '\0';
    }
    char x = arr[s->top];
    (s->top)--;
    return x;
}

char dequeue() {
    if (q->rear == -1 && q->front == -1) {
        printf("Underflow");
        return '\0';
    }
    char x = arr[q->front];
    (q->front)++;
    return x;
}

void enqueue(char val) {
    if (q->rear == Size - 1) {
        printf("Overflow");
        return;
    } else if (q->front == -1 && q->rear == -1) {
        q->front = q->rear = 0;
    } else {
        q->rear++;
        arr[q->rear] = val;
    }
}

int main() {
    s = (struct stacks *)malloc(sizeof(struct stacks));
    s->top = -1;

    q = (struct queues *)malloc(sizeof(struct queues));
    q->rear = q->front = -1;

    scanf("%s", arr);
    int k = strlen(arr);
    for (int i = 0; i < k; i++) {
        enqueue(arr[i]);
        push(arr[i]);
    }

    int flag = 1;
    while (s->top != -1) {
        char st = pop();
        char qe = dequeue();
        if (isalpha(st) && isalpha(qe)) {
            if (st != qe) {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 0)
        printf("Not a palindrome\n");
    else
        printf("Palindrome\n");

    return 0;
}
