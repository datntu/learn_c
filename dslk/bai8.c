//sap xep danh sach lien ket
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
void sortNode(node **head){
    for(node *i=(*head);i != NULL;i=i->next){
        node *min=i;
        for(node *j=i->next;j!=NULL;j=j->next){
            if(j->data<min->data){
                min=j;
            }
        }
        int tmp=min->data;
        min->data=i->data;
        i->data=tmp;
    }
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
    for(int i=n-1;i>=0;i--){
        pushBack(&head,i);
    }
    sortNode(&head);
    duyet(head);
    return 0;
}