#include<stdio.h>
#include<stdlib.h>
//$->is new line
struct node{
    int data;
    struct node *next;
    struct node *prev;//$
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void display(PNODE first){

}

int count(PNODE first){
    return 0;
}

void insertfirst(PPNODE first,int iNo){
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;

    if(NULL == *first){
        *first=newn;
    }
    else{
        newn->next=*first;
        (*first)->prev=newn;//$
        *first=newn;
    }

}
void insertlast(PPNODE first,int iNo){
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;

    if(NULL==*first){
        *first=newn;
    }
    
}
void insertatPos(PNODE first,int iNo,int iPos){
    
}
void deletefirst(PNODE first){

}
void deletelast(PNODE first){
    
}
void deleteatPos(PNODE first,int iPos){
    
}

int main(){
    PNODE head=NULL;
    insertfirst(&head,51);
    insertfirst(&head,21);
    insertfirst(&head,11);

    return 0;
}