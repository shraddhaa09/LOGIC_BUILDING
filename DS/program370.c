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

}
int count(PNODE first){
    return 0;
}
void InsertatFirst(PPNODE first,int iNo){

}
void InsertatLast(PPNODE first,int iNo){
    
}
void InsertatPos(PPNODE first,int iNo,int iPos){
    
}
void DeleteatFirst(PPNODE first){

}
void DeleteatLast(PPNODE first){
    
}
void DeleteatPos(PPNODE first,int iPos){
    
}
int main(){
    PNODE head=NULL;
    return 0;
}