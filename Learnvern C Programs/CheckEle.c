#include<stdio.h>
#include<ctype.h>

void main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(isalpha(ch))
        printf("The character '%c' is a letter.\n", ch);
    else if(isdigit(ch))
        printf("The character '%c' is a digit.\n", ch);
    else if(isspace(ch))
        printf("The character '%c' is a whitespace character.\n", ch);
    else
        printf("The character '%c' is a special symbol.\n", ch);
}
