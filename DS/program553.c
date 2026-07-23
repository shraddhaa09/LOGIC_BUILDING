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
        if(first != NULL){
            Display(first->next);
            printf("| %d |->",first->data);//reverse
            
        }
}
int count(PNODE first){
    static int iCount=0;
    if(first!=NULL){
        iCount++;
        first=first->next;
        count(first);
    }
    return iCount;
}
void InsertFirst(PPNODE first,int iNo){
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;
    if(*first==NULL){//ll is empty 
        *first=newn;
    }
    else{//contains atleast one node
        newn->next=*first;
        *first=newn;
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
    printf("\nNumber of the nodes are %d",iRet);
    return 0;
}