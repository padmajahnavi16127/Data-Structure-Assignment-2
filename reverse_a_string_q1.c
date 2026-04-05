#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

int main() {
    char str[100];
    int i;

    printf("Enter string: ");
    scanf("%s", str);

    // Push
    for(i = 0; i < strlen(str); i++) {
        push(str[i]);
    }

    // Pop
    printf("Reversed string: ");
    while(top != -1) {
        printf("%c", pop());
    }

    return 0;
}