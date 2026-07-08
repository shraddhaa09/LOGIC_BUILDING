#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;//$
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int main(){
    printf("%d\n",sizeof(NODE));//20 bytes
    return 0;
}