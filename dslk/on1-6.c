// ôn tập thêm, xóa danh sách liên kết
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node node;
//create a node 
node *MakeNode(int x){
    node *newNode=(node*)malloc(sizeof(node));
    newNode->data=x;
    newNode->next=NULL;
    return newNode;
}
// them vao dau node
void addFirst(node **head,int x){
    node *newNode=MakeNode(x);
    newNode->next=(*head);
    *head=newNode;
}
//them vao cuoi
void addLast(node **head,int x){
    node *newNode=MakeNode(x);
    node *tmp=*head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
//them vao vi tri k
void addMiddle(node **head,int k,int x){
    node *newNode=MakeNode(x);
    node *tmp=*head;
    for(int i=0;i<k-1;i++){
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}

//in  ra cac node vua tao
void duyet(node *head){
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
}
//xoa dau
void popFirst(node **head){
    node *tmp=*head;
    *head=tmp->next;
    free(tmp);
}
//xoa cuoi
void popBack(node **head){
    node *tmp=*head;
    while(tmp->next->next!=NULL){
        tmp=tmp->next;
    }
    node *last=tmp->next;
    tmp->next=NULL;
    free(last);
}
//xoa vi tri k
void erase(node **head,int k){
    node *truoc=*head;
    node *sau=*head;
    for(int i=0;i<=k-1;i++){
        truoc=sau;
        sau=sau->next;
    }
    truoc->next=sau->next;
    free(sau);
}

int main(){
    int n;
    scanf("%d",&n);
    node *head=NULL;
    for(int i=0;i<n;i++){
        addFirst(&head,i);
    }
        addLast(&head,6);
        addMiddle(&head,3,9);
        popFirst(&head);
        popBack(&head);
        erase(&head,2);
    duyet(head);



    return 0;
}