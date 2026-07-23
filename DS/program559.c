#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#pragma pack(1)
struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
    
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

//LDR
void Inorder(PNODE first){
    if(first!=NULL){
        Inorder(first->lchild);
        printf("%d\n",first->data);
        Inorder(first->rchild);
    }
}
//DLR
void Preorder(PNODE first){
    if(first!=NULL){
        printf("%d\n",first->data);
        Preorder(first->lchild);
        Preorder(first->rchild);
    }
}

//RLD
void Postorder(PNODE first){
    if(first!=NULL){
        Postorder(first->lchild);
        Postorder(first->rchild);
        printf("%d\n",first->data);
    }
}

int Count(PNODE first)
{
    int iCnt = 0;

    if(first != NULL)
    {
        iCnt = 1;
        iCnt = iCnt + Count(first->lchild);
        iCnt = iCnt + Count(first->rchild);
    }

    return iCnt;
}
void Insert(PPNODE first,int iNo){
    PNODE newn=NULL;
    PNODE temp=NULL;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->lchild=NULL;
    newn->rchild=NULL;

    if(*first==NULL){
        *first=newn;
        return;
    }
    temp=*first;
    while (1)
    {
        if(iNo>temp->data){
            if(temp->rchild==NULL){
                temp->rchild=newn;
                break;
            }
        temp=temp->rchild;
        }

        else if(iNo<temp->data){
            if(temp->lchild==NULL){
            temp->lchild=newn;
            break;
            }
            temp=temp->lchild;
        }
        else{
        printf("unable to insert an element is duplicate");
        free(newn);
        break;
    }
}
}

int main(){
    PNODE head=NULL;
    int iRet=0;


    Insert(&head,11);
    Insert(&head,5);
    Insert(&head,17);
    Insert(&head,21);
    Insert(&head,4);
    Insert(&head,7);
    Insert(&head,15);

    printf("Inorder Display:\n");
    Inorder(head);

    printf("\nPreorder Display:\n");
    Preorder(head);

    printf("\nPostorder Display:\n");
    Postorder(head);

    iRet = Count(head);
    printf("\nThe number of nodes are: %d\n", iRet);

    
    return 0;
}
