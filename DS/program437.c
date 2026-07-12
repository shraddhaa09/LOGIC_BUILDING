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

void display(PNODE first,PNODE last){
    if(first==NULL & last==NULL){
        return;
    }
    printf("<=>");
    do{
        printf("|%d|<=>",first->data);
        first=first->next;
    }while(first!=last->next);
    printf("\n");
}
int Count(PNODE first,PNODE last){
    int iCount=0;
    if(first==NULL & last==NULL){
        return iCount;
    }
    do{
        iCount++;
        first=first->next;
    }while(first!=last->next);
    return iCount;
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
void DeleteFirst(PPNODE first,PPNODE last){
    if(*first==NULL && *last==NULL){
        return;
    }
    else if(*first==*last){
        free(*first);
        *first=NULL;
        *last=NULL;

    }
    else{
        *first=(*first)->next;
        free((*first)->prev);

        (*last)->next=*first;
        (*first)->prev=*last;

    }

}
void DeleteLast(PPNODE first,PPNODE last){
    if(*first==NULL && *last==NULL){
        return;
    }
    else if(*first==*last){
        free(*first);
        *first=NULL;
        *last=NULL;

    }
    else{
        *last=(*last)->prev;
        free((*last)->next);

        (*last)->next=*first;
        (*first)->prev=*last;
        

    }

}
void DeleteatPost(PPNODE first,PPNODE last,int iNo,int Ipos){

}


int main(){
    PNODE head=NULL;
    PNODE tail=NULL;
    int iRet=0;

    insertFirst(&head,&tail,51);
    insertFirst(&head,&tail,21);
    insertFirst(&head,&tail,11);

    insertLast(&head,&tail,111);
    insertLast(&head,&tail,101);
    insertLast(&head,&tail,121);

    display(head,tail);
    iRet=Count(head,tail);
    printf("the number of the nodes are: %d\n",iRet);

    DeleteFirst(&head,&tail);

    display(head,tail);
    iRet=Count(head,tail);
    printf("the number of the nodes are: %d\n",iRet);

    DeleteLast(&head,&tail);

    display(head,tail);
    iRet=Count(head,tail);
    printf("the number of the nodes are: %d\n",iRet);



    return 0;
}