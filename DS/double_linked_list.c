#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}*Head=NULL;
void create();
void display();
void insertBeg();
void insertMid();
void main(){
    int choice;
    while(1){
    printf("\n1-----insert");
    printf("\n2-----insert beg");
    printf("\n3-----insert mid");
    printf("\n4-----display");
    printf("\n5-----exit");
    printf("\nEnter the choice : "); 
    scanf("%d",&choice);
    switch(choice){
    case 1:create();
           break;
    case 2:insertBeg();
           break;
    case 3:insertMid();
           break;      
    case 4:display();
           break;      
    case 5:exit(0);
           break;
       }
    }
}
void create(){
    int num;
    struct Node *temp,*temp1=Head;
    if(Head==NULL){
        Head=(struct Node *)malloc(sizeof(struct Node));
        printf("\nEnter the data vlaue :");
        scanf("%d",&Head->data);
        Head->next=NULL;
        Head->prev=NULL;
    }else{
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp=(struct Node*)malloc(sizeof(struct Node));
        printf("\nEnter the data vlaue :");
        scanf("%d",&temp->data);
        temp1->next=temp;
        temp->prev=temp1;
        temp->next=NULL;
    }
}
void insertBeg(){
    int num;
    struct Node *temp=Head;
    if(Head==NULL){
        Head=(struct Node*)malloc(sizeof(struct Node));
        printf("\nenter data value : ");
        scanf("%d",&Head->data);
        Head->next=NULL;
        Head->prev=NULL;
    }else{
        temp=(struct Node*)malloc(sizeof(struct Node));
        printf("\nenter data value : ");
        scanf("%d",&temp->data);
        temp->next=Head;
        temp->prev=temp;
        Head=temp;
    }
}
void insertMid(){
    struct Node *temp=Head,*temp1;
    int num;
    printf("\nEnter the node after which you want to add : "); 
    scanf("%d",&num); 
    while(temp->data!=num){ 
        temp=temp->next;
        if (temp==NULL) { 
            break; 
        }
    } 
    if (temp==NULL) { 
    printf ("\nThe node not found!!"); 
    }else{ 
        temp1=(struct Node *)malloc(sizeof (struct Node)); 
        printf("\nenter the data value : "); 
        scanf("%d", &temp1->data);
        temp1->next=temp->next;
        temp1->prev=temp;
        temp->next=temp1;
    }
}
void display(){
    struct Node *temp=Head;
    if(Head==NULL){
        printf("\nThe list is empty !!");
    }else{
        while(temp!=NULL){
            printf("<--|%d|-->",temp->data);
            temp=temp->next;
        }
    }
}