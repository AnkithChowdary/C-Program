#include <stdio.h>
#include <ctype.h>

int a[100];
int top = -1;

int pop() {
    return a[top--];
}

void push(int x) {
    a[++top] = x;
}

void main(){
  int m, n, x;
  char b[100], *p;
  printf("Enter the expression: ");
  scanf("%s", b);
  p = b;
  while (*p != '\0') {
    if (isdigit(*p)) {
      x = *p - '0'; 
      push(x);
    } else {
      
      n = pop();
      m = pop();
      
      switch (*p) {
        case '+':
          push(m + n);
          break;
        case '-':
          push(m - n);
          break;
        case '*':
          push(m * n);
          break;
        case '/':
          push(m / n);
          break;
      }
    }
    p++;
  }
  
  printf("%d\n", pop());
}
