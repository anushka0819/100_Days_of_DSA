#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

int main(){
    int n;
    scanf("%d",&n);

    struct Node *front=NULL,*rear=NULL;

    for(int i=0;i<n;i++){
        int val;
        scanf("%d",&val);

        struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
        newNode->data=val;
        newNode->next=NULL;

        if(front==NULL){
            front=newNode;
            rear=newNode;
        }else{
            rear->next=newNode;
            rear=newNode;
        }
    }

    struct Node* temp=front;
    while(temp!=NULL){
        printf("%d",temp->data);
        if(temp->next!=NULL) printf(" ");
        temp=temp->next;
    }

    return 0;
}