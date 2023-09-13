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
void erase(node **head,int k){
    node *sau=*head;
    node *truoc=*head;
    for(int i=1;i<=k;i++){
        sau=truoc;
        truoc=truoc->next;
    }
    sau->next=truoc->next;
    free(truoc);
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
    for(int i=1;i<=n;i++){
        pushBack(&head,i);
    }
    erase(&head,3);
    duyet(head);
    return 0;
}