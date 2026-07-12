#include<iostream>
using namespace std;
#pragma pack(1)//applicable only for first delcaration not for the complete code

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyCL {
    private:
        PNODE first;
        PNODE last;
        int iCount;
    public:
        DoublyCL();

        void Display();
        int Count();

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertatPos(int iNo,int iPos);

        void DeleteFirst(int iNo);
        void DeleteLast(int iNo);
        void DeleteatPos(int iPos);

};
DoublyCL::DoublyCL(){

}

void DoublyCL::Display(){

}
int DoublyCL::Count(){
    return iCount;

}

void DoublyCL::InsertFirst(int iNo){

}
void DoublyCL::InsertLast(int iNo){

}
void DoublyCL::InsertatPos(int iNo,int iPos){

}

void DoublyCL::DeleteFirst(int iNo){

}
void DoublyCL::DeleteLast(int iNo){

}
void DoublyCL::DeleteatPos(int iPos){

}
int main(){
    DoublyCL dobj;
    cout<<sizeof(dobj)<<"\n";
    return 0;
}