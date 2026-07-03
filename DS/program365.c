#include<stdio.h>
#pragma pack(1)

//Linked List
//head(100)->obj1(11,200)(&100)->obj2(21,300)(&200)->obj3(51,NULL)(&300);

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;

int Count(PNODE first){
    int iCount=0;
    while(first!=NULL)
    {
    iCount++;
    first=first->next;
    }
    return iCount;
}

int main(){

    PNODE head=NULL;
    int iRet=0;

    NODE obj1,obj2,obj3;

    obj1.data=11;
    obj1.next=&obj2;

    obj2.data=21;
    obj2.next=&obj3;

    obj3.data=51;
    obj3.next=NULL;

    iRet=Count(head); 
    printf("the number of the nodes %d",iRet);
    return 0;

}
