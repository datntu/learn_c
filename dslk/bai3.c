//thêm vào vị trí k trong danh sách liên kêt
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
void addFrist(node **head,int x){
    node *newNode=makeNode(x);
    newNode->next=*head;
    *head=newNode;
}

void insert(node **head,int k,int x){
    node *temp=*head;
    for(int i=0;i<k-1;i++){
        temp=temp->next;
    }
    node *newNode=makeNode(x);
    newNode->next=temp->next;
    temp->next=newNode;
}

void duyet(node *head){
    while (head!=NULL)
    {
        printf("%d",head->data);
        head=head->next;
    } 
}
int main(){
    int n;
    scanf("%d",&n);
    node *head=NULL;
    for(int i=0;i<n;i++){
        addFrist(&head,i);
    }
    insert(&head,3,9);
    duyet(head);
}