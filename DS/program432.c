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
void insertFirst(NODE first,PPNODE last,int iNo){

}
void insertLast(NODE first,PPNODE last,int iNo){

}
void insertatPos(NODE first,PPNODE last,int iNo,int iPos){

}
void DeleteFirst(NODE first,PPNODE last,int iNo){

}
void DeleteLast(NODE first,PPNODE last,int iNo){

}
void DeleteatPost(NODE first,PPNODE last,int iNo,int Ipos){

}


int main(){
    return 0;
}