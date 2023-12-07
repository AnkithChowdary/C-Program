#include<stdio.h>
#include<stdlib.h>
#define N 6

struct queue {
    int arr[N];
    int front;
    int rear;
} *q;

void enqueue(int val) {
    if (q->rear == N - 1) {
        printf("OverFlow\n");
        return;
    }
    ++(q->rear);
    q->arr[q->rear] = val;
}

void dequeue() {
    if (q->front > q->rear || q->front == -1) {
        printf("Underflow\n");
        return;
    }
    ++(q->front);
}

void display() {
    if (q->front == q->rear) {
        printf("Queue is empty\n");
        return;
    }

    for (int i = (q->front) + 1; i <= (q->rear); i++)
        printf("%d ", q->arr[i]);
}

int main() {
    int n = 1;
    q = (struct queue*)malloc(sizeof(struct queue));
    q->rear = q->front = -1;

    while (n != 0) {
        int c;
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        scanf("%d", &c);

        switch (c) {
            case 1:
                int s;
                printf("Enter the value:");
                scanf("%d", &s);
                enqueue(s);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                n = 0;
                break;
            default:
                break;
        }
    }

    free(q);
    return 0;
}
