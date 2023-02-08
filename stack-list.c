#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;
Node *top = NULL;

void push() {
    int value;
    printf("\nInsert value\n");
    scanf("%d", &value);
    Node *temp = malloc(sizeof(Node));
    temp->data = value;
    if (top) 
        temp->next = top;
    top = temp;
}

void pop() {
    if (top) {
        Node *temp = malloc(sizeof(Node));
        temp = top;
        temp = temp->next;
        top = temp;
    } else 
        printf("\nStack does not have nodes, so it is impossible to pop\n");
}

void print_message() {
    printf("\n1: push\n");
    printf("2: pop\n");
    printf("3: print\n");
}

void print_stack() {
    Node *temp = top;
    printf("\n");
    while (temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
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