//dslk đơn
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node node;

//tao 1 node moi

node *makeNode(int x ){
    node *newNode=(node*)malloc(sizeof(node));
    newNode->data=x;
    newNode->next=NULL;
    return newNode;
}
//them vao dau dslk
void pushFront(node **head,int x){
    node *newNode=makeNode(x);
    newNode->next=(*head);
    *head =newNode;
}
void duyet(node *head){
    while (head!=NULL){
        printf("%d",head->data);
        head=head->next;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    node *head=NULL;
    for(int i=0;i<n;i++){
        pushFront(&head,i);
    }
    duyet(head);
    return 0;
}