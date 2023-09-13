#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node node;

//tao 1 node moi
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
//tim node thu k trong sanh sach lien ket
void findNode(node *head,int pos){
    node *tmp=head;
    for(int i=1;i<=pos-1;i++){
        tmp=tmp->next;
    }
    printf("%d",tmp->data);
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
    findNode(head,2);
    return 0;
}