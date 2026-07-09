#include<iostream>
using namespace std;
#pragma pack(1)
struct node
{
    int data;
    struct node *next; 
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyLL
{
    private:
        PNODE first;
        int iCount;

    public:
        SinglyLL();

        void Display();
        int count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo,int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos();

};

SinglyLL::SinglyLL(){

    cout<<"Inside constructor\n";
    this->first=NULL;
    this->iCount=0;
}

void SinglyLL :: Display(){

}

int SinglyLL::count(){
    return this->iCount;
}
void SinglyLL :: InsertFirst(int iNo){

}
void SinglyLL :: InsertLast(int iNo){

}
void SinglyLL :: InsertAtPos(int iNo,int iPos){

}
void SinglyLL :: DeleteFirst(){

}
void SinglyLL :: DeleteLast(){

}
void SinglyLL :: DeleteAtPos(){

}

int main(){
    SinglyLL sobj;

    
    

    return 0;
}