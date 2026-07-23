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
typedef struct node node;
typedef struct node* node;
typedef struct node** node;

int main(){
    PNODE head=NULL;

    return 0;
}
