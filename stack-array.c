#include <stdio.h>
#include <stdlib.h>

#define size_stack 4

int stack[size_stack];
int top = -1;

int is_empty() {
    if (top == -1)
        return 1;
    return 0;
}

void pop() {
    if (!is_empty()) 
        --top;
    else
        printf("\nStack is empty\n");
}

int is_full() {
    if (top == size_stack - 1)  
        return 1;
    return 0;
}

void push() {
    if (!is_full()) {
        printf("\nInsert value: \n");
        int value;
        scanf("%d", &value);
        stack[++top] = value;
    } else
        printf("\nStack is full\n");
}

void print_message() {
    printf("\n1: push\n");
    printf("2: pop\n");
    printf("3: print\n");
}

void print_stack() {
    printf("\n");
    for (int i = 0; i <= top; ++i)
        printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    int option;
    while (1) {
        print_message();
        scanf("%d", &option);
        if (option == 1)
            push();
        else if (option == 2)
            pop();
        else if (option == 3)
            print_stack();
        else if (option == 4) // end program
            return 0;
        else
            printf("\nInvalid option\n");
    }
}