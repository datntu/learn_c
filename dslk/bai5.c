//xoa cuoi node
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node node;

//create a node 
node *makeNode(int x){
    node *newNode =(node*)malloc(sizeof(node));
    newNode->data=x;
    newNode->next=NULL;
    return newNode;
}
void pushBack(node **head,int x){
    node *newNode =makeNode(x);
    if(*head==NULL){
        *head=newNode; return ; 
    }
    node *tmp= *head;
    while (tmp->next!=NULL){
        tmp=tmp->next;
    }
        tmp->next=newNode;
}
void PopBack(node **head){
    node *tmp=*head;
    while(tmp->next->next!=NULL){
        tmp=tmp->next;
    }
    node *last=tmp->next;
    tmp->next=NULL;
    free(last);
}
void duyet(node *head){
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    node *head=NULL;
    for(int i=0;i<n;i++){
        pushBack(&head,i);
    }
    PopBack(&head);
    duyet(head);
    return 0;
}