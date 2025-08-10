#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int stack[SIZE];
int top = -1;
void push();
void pop();
void display();
int main() {
    int choice;
    while (1) {
        printf("\n1 ---- push");
        printf("\n2 ---- pop");
        printf("\n3 ---- display");
        printf("\n4 ---- exit");
        printf("\nEnter the choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push();
                display();
                break;
            case 2:
                pop();
                display();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid choice, try again.");
        }
    }
}
void push() {
    int num;
    if (top == SIZE - 1) {
        printf("\nThe stack is full\n");
    } else {
        top++;
        printf("\nEnter the number: ");
        scanf("%d", &num);
        stack[top] = num;
        printf("\nThe data %d is pushed in the stack\n", stack[top]);
    }
}
void pop() {
    if (top == -1) {
        printf("\nThe stack is underflow\n");
    } else {
        printf("\nThe %d is popped\n", stack[top]);
        top--;
    }
}
void display() {
    if (top == -1) {
        printf("\nThe stack is empty\n");
    } else {
        printf("\nStack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d--->", stack[i]);
        }
    }
}


