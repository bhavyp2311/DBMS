#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int CQ[SIZE];
int front = -1;
int rear = -1;
void insertCQ();
void displayCQ();
void main(){
    int choice;
    while (1){
        printf("\n1-----insert");
        printf("\n2-----display");
        printf("\n3-----exit");
        printf("\nEnter choice :");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            insertCQ();
            break;
        case 2:
            displayCQ();
            break;
        case 3:
            exit(0);
        }
    }
}
void insertCQ(){
    int num;
    if (front == 0 && rear == SIZE - 1){
        printf("\nThe CQ is full");
    }else if (front - 1 == rear){
        printf("\nCQ is full");
    }else if (front != 0 && rear == SIZE - 1){
        rear = 0;
        rear = 0;
        printf("nEnter the number :");
        scanf("%d", &num);
        CQ[rear] = num;
    }else if (front == -1){
        front = 0;
        rear = 0;
        printf("Enter the number :");
        scanf("%d", &num);
        CQ[rear] = num;
    }else{
        rear++;
        printf("\nEnter the number :");
        scanf("%d", &num);
        CQ[rear] = num;
    }
}
void displayCQ(){
    int i;
    if (front == -1){
        printf("\nThe que is empty !!");
    }else if (rear <= SIZE - 1){
        for (i = front; i <= rear; i++){
            printf("%d-->", CQ[i]);
        }
    }else{
        for (i = front; i <= SIZE - 1; i++){
            printf("%d-->", CQ[i]);
        }
        for (i = 0; i <= rear; i++){
            printf("%d-->", CQ[i]);
        }
    }
}