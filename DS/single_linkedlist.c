#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *link;   
}*Head=NULL;
void create();
void display();
void insertBeg();
void insertMid();
void del();
void deleteFirst();
void update();
void count();
void main(){
    int choice;
    start:
    printf("\n1-----insert");
    printf("\n2-----insert beg");
    printf("\n3-----insert mid");
    printf("\n4-----delete last");
    printf("\n5-----delete First");
    printf("\n6-----display");
    printf("\n7-----update");
    printf("\n8-----count");
    printf("\n9-----exit");
    printf("\nEnter the choice : "); 
    scanf("%d",&choice);
    switch(choice){
    case 1:create();
           break;
    case 2:insertBeg();
           break;
    case 3:insertMid();
           break;      
    case 4:del();
           display();
           break; 
    case 5:deleteFirst();
           display();
           break; 
    case 6:display();
           break; 
    case 7:update();
           break; 
    case 8:count();
           break;        
    case 9:exit(0);
           break;
       }
    goto start;
}
void create(){
    int num;
    struct Node *temp,*temp1=Head;
    if(Head==NULL){
        Head=(struct Node*)malloc(sizeof(struct Node));
        printf("\nEnter the data vlaue :");
        scanf("%d",&num);
        Head->data=num;
        Head->link=NULL;
    }else{
        while(temp1->link!=NULL){
            temp1=temp1->link;
        }
        temp=(struct Node*)malloc(sizeof(struct Node));
        printf("\nEnter the data vlaue :");
        scanf("%d",&num);
        temp->data=num;
        temp1->link=temp;
        temp->link=NULL;
    }
}
void insertBeg(){
    int num;
    struct Node *temp;
    if(Head==NULL){
        Head=(struct Node*)malloc(sizeof(struct Node));
        printf("\nenter data value : ");
        scanf("%d",&num);
        Head->data=num;
        Head->link=NULL;
    }else{
        temp=(struct Node*)malloc(sizeof(struct Node));
        printf("\nenter data value : ");
        scanf("%d",&num);
        temp->data=num;
        temp->link=Head;
        Head=temp;
    }
}
void insertMid(){
    struct Node *temp1=Head;
    struct Node *temp;
    int num;
    printf("\nEnter the node after which you want to add"); 
    scanf("%d",&num); 
    while(temp1->data!=num){ 
        temp1=temp1->link; 
        if (temp1==NULL) { 
            break; 
        }
    } 
    if (temp1==NULL) { 
    printf ("\nThe node doeant exist"); 
    }else{ 
        temp=(struct Node*)malloc(sizeof (struct Node)); 
        printf("\nenter the data value"); 
        scanf("%d", &num);
        temp->data=num;
        temp->link=temp1->link;
        temp1->link=temp;
    }
}
void del(){
    struct Node *temp=Head,*temp1;
    if(Head==NULL){
        printf("\nThe data list is empty !!");
    }else{
        while(temp->link->link!=NULL){
            temp=temp->link;
        }
        temp1=temp->link;
        temp->link=NULL;
        free(temp1);
    }
}
void deleteFirst(){
    struct Node *temp;
    if(Head == NULL){
        printf("\nThe list is empty !!");
    } else {
        temp = Head;
        Head = Head->link;
        free(temp);
    }
}

void display(){
    struct Node *temp=Head;
    if(Head==NULL){
        printf("\nThe list is empty !!");
    }else{
        while(temp!=NULL){
            printf("%d--->",temp->data);
            temp=temp->link;
        }
    }
}
void update(){
    struct Node *temp=Head;
    int num,value;
    printf("\nEnter the value u want to update : ");
    scanf("%d",&num);
    while(temp->data!=num){
        temp=temp->link;
        if(temp==NULL){
            break;
        }
        if(temp==NULL){
            printf("\ndata to be updated no found : ");
        }else{
            printf("\nEnter the data :");
            scanf("%d",&value);
            temp->data=value;
            printf("\ndata updated succesfully");
        }
    }
}
void count(){
    int cnt = 0;
    struct Node *temp = Head;
    if (Head == NULL) {
        printf("\nThe list is empty !!");
    }
    while (temp != NULL) {
        cnt++;
        temp = temp->link;
    }
    printf("\nTotal number of nodes: %d", cnt);
}
