#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int Q[SIZE];
int front=-1;
int rear=-1;
void insert();
void del();
void display();
void main(){
    int choice;
    start:
    printf("\n1--------insert");
    printf("\n2--------display");
    printf("\n3--------delete");
    printf("\n4--------exit");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:insert();
               display();
               break;
        case 2:display();
               break;
        case 3:del();
               display();
               break;
        case 4:exit(0);
    }
    goto start;
}
void insert(){
    int num;
    if(rear==SIZE-1){
        printf("\nQUE is full\n");       
    }else if(front==-1){
        printf("\n enter the number : ");
        scanf("%d",&num);
        front=0;
        rear=0;
        Q[front]=num;
    }else{
        printf("\n enter the number : ");
        scanf("%d",&num);
        rear++;
        Q[rear]=num;
    }
}
void display(){
    int i;
    if(front==-1){
        printf("\nQ is empty !!");
    }else{
        for(i=front;i<=rear;i++){
            printf("%d--->",Q[i]);
        }
    }
}
void del(){
    if(front==-1){
        printf("\nQ is empty !!");
    }else if(front==rear){
        front=-1;
        rear=-1;
    }else{
        front++;
    }
}