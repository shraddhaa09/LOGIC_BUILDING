#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};
/*-THESE THREE LINES:
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
CAN BE WRITTEN AS ->

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;
*/

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int main(){
    PNODE head=NULL;
    return 0;
}