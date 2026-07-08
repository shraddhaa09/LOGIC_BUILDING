#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
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
    printf("\nNULL <=>");
    while (first!=NULL)
    {
        printf("| %d | <=> ",first->data);
        first=first->next;
    }
    printf("NULL\n");

}

int count(PNODE first){
    int iCount=0;
    while (first!=NULL)
    {
        iCount++;
        first=first->next;
    }
    
    return iCount;
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
    PNODE temp=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;

    if(NULL==*first){
        *first=newn;
    }
    else{
        temp=*first;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp;
    }
    
}
void insertatPos(PPNODE first,int iNo,int iPos){
    int iCount=0;
    iCount=count(*first);
    if((iPos<1)||(iPos>iCount+1)){
        printf("Invalid position\n");
        return;
    }
    if(iPos==1){
        insertfirst(first,iNo);
    }
    if(iPos==iCount+1){
        insertlast(first,iNo);
    }

    
}
void deletefirst(PPNODE first){
    if(*first==NULL){
        return;
    }
    else if((*first)->next==NULL){
        free(*first);
        *first=NULL;
    }
    else{
        *first=(*first)->next;
        free((*first)->prev);//$
        (*first)->prev=NULL;//$
    }

}
void deletelast(PPNODE first){
    PNODE temp=NULL;

    if(*first==NULL){
        return;
    }
    else if((*first)->next==NULL){
        free(*first);
        *first=NULL;
    }
    else{
        temp=*first;
        while (temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;  

    }
    
}
void deleteatPos(PPNODE first,int iPos){
    int iCount=0;
    iCount=count(*first);
    if((iPos<1)||(iPos>iCount+1)){
        printf("Invalid position\n");
        return;
    }
    if(iPos==1){
        deletefirst(first);
    }
    if(iPos==iCount+1){
        deletelast(first);
    }
    
}

int main(){
    PNODE head=NULL;
    int iRet=0;
    insertfirst(&head,51);
    insertfirst(&head,21);
    insertfirst(&head,11);

    insertlast(&head,101);
    insertlast(&head,111);
    insertlast(&head,121);

    display(head);
    iRet=count(head);
    printf("Number of the elements are %d\n",iRet);

    deletefirst(&head);
    
    display(head);
    iRet=count(head);
    printf("Number of the elements are %d\n",iRet);

    deletelast(&head);

    display(head);
    iRet=count(head);
    printf("Number of the elements are %d\n",iRet);



    return 0;
}