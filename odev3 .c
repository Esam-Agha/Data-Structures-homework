#include <stdio.h>
#include <ctype.h>

char stack[100];
int top = -1;

void push(char x) { stack[++top] = x; }
char pop() { return stack[top--]; }

int oncelik(char x) {
    if(x == '(') return 0;
    if(x == '+' || x == '-') return 1;
    if(x == '*' || x == '/') return 2;
    return 0;
}

int main() {
    char exp[] = "a+b*(c^d-e)"; 
    char *e, x;
    e = exp;
    
    printf("Postfix sonuc: ");
    while(*e != '\0') {
        if(isalnum(*e)) printf("%c", *e);
        else if(*e == '(') push(*e);
        else if(*e == ')') {
            while((x = pop()) != '(') printf("%c", x);
        }
        else {
            while(top != -1 && oncelik(stack[top]) >= oncelik(*e))
                printf("%c", pop());
            push(*e);
        }
        e++;
    }
    while(top != -1) printf("%c", pop());
    return 0;
}