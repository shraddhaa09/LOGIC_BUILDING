#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void display(NODE first,PNODE last){
}
int Count(NODE first,PNODE last){
    return 0;
}
void insertFirst(PPNODE first,PPNODE last,int iNo){
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;

    if(*first==NULL && *last==NULL){
        *first=newn;
        *last=newn;
    }
    else{
        newn->next=*first;
        (*first)->prev=newn;
        *first=newn;
    }
    (*last)->next=*first;
    (*first)->prev=*last;

}
void insertLast(PPNODE first,PPNODE last,int iNo){
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;

    if(*first==NULL && *last==NULL){
        *first=newn;
        *last=newn;
    }
    else{
        (*last)->next=newn;
        newn->prev=*last;
        *last=newn;
        
    }
    (*last)->next=*first;
    (*first)->prev=*last;

}
void insertatPos(PPNODE first,PPNODE last,int iNo,int iPos){

}
void DeleteFirst(PPNODE first,PPNODE last,int iNo){

}
void DeleteLast(PPNODE first,PPNODE last,int iNo){

}
void DeleteatPost(PPNODE first,PPNODE last,int iNo,int Ipos){

}


int main(){
    PNODE head=NULL;
    PNODE tail=NULL;

    insertFirst(&head,&tail,51);
    insertFirst(&head,&tail,21);
    insertFirst(&head,&tail,11);

    insertLast(&head,&tail,111);
    insertLast(&head,&tail,101);
    insertLast(&head,&tail,121);

    return 0;
}