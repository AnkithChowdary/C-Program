#include <stdio.h>

void print_diamond(int n) {
  int i, j;

  for (i = 0; i < n; i++) {
    for (j = 1; j <= n - i; j++) {
      printf(" ");
    }
    for (j = 1; j <= 2 * i - 1; j++) {
      printf("*");
    }
    printf("\n");
  }}
/*
  fr (i = n - 1; i >= 1; i--) {
    for (j = 1; j <= n - i; j++) {
      printf(" ");
    }
    for (j = 1; j <= 2 * i - 1; j++) {
      printf("*");
    }
    printf("\n");
  }o
} */

int main() {
  int n;
  printf("Enter the number of rows: ");
  scanf("%d", &n);

  print_diamond(n);

  return 0;
}

