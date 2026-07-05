#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void Display(PNODE first)
{
        while(first != NULL){
            printf("| %d |->",first->data);
            first=first->next;
        }
        printf("NULL\n");

}
int count(PNODE first){
    int iCount=0;
    while(first!=NULL){//type 1
        iCount++;
        first=first->next;
    }
    return iCount;
}
void InsertFirst(PPNODE first,int iNo){
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;
    
    if(NULL==*first){//ll is empty 
        *first=newn;
    }
    else{//contains atleast one node
        newn->next=*first;
        *first=newn;
    }

}
void InsertLast(PPNODE first,int iNo){
    PNODE newn=NULL;
    PNODE temp=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;
    if(*first==NULL){//ll is empty 
        *first=newn;
    }
    else{//contains atleast one node
        temp=*first;

        while(temp->next!=NULL){//type 2
            temp=temp->next;
        }
        temp->next=newn;
       
    }
    
}
void InsertPos(PPNODE first,int iNo,int iPos){
    int iCount=0;
    iCount=Count(*first);
    if((iPos<1)||(iPos>iCount+1)){
        printf("Invalid Position");
        return ;
    }
    if(iPos==1){
        InsertFirst(first,iNo);
    }
    else if(iPos==iCount+1){
        InsertLast(first,iNo);
    }

    
}
void DeleteFirst(PPNODE first){
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
        *first=(*first)->next;
        free(temp);
    }

}
void DeleteLast(PPNODE first){
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
        while (temp->next->next!=NULL)//type 3 
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
    
    }
    
}
void DeleteatPos(PPNODE first,int iPos){
    int iCount=0;
    iCount=Count(*first);
    if((iPos<1)||(iPos>iCount)){//note->+1 removed
        printf("Invalid Position");
        return ;
    }
    if(iPos==1){
        DeleteFirst(first);
    }
    else if(iPos==iCount){
        DeleteLast(first);
    }
}
int main(){
    PNODE head=NULL;
    int iRet=0;

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);
    iRet=count(head);
    printf("Number of the nodes are %d",iRet);

    InsertLast(&head,111);
    InsertLast(&head,121);

    Display(head);
    iRet=count(head);
    printf("Number of the nodes are %d",iRet);

    DeleteFirst(&head);
    Display(head);
    iRet=count(head);
    printf("Number of the nodes are %d",iRet);

    DeleteLast(&head);
    Display(head);
    iRet=count(head);
    printf("Number of the nodes are %d",iRet);

    return 0;
}