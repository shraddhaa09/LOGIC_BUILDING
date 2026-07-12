#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;

};
typedef struct node NODE;
typedef struct node *PNODE;

class SinglyCL{
    private:
        PNODE first;
        PNODE last;
        int iCount;
    public:
        SinglyCL();
        void Display();
        int count();
        void Insertfirst(int iNo);
        void InsertLast(int iNo);
        void InsertatPos(int iNo,int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteatPos(int iPos);
};
SinglyCL::SinglyCL(){
    cout<<"Inside constructor";
    this->first=NULL;
    this->last=NULL;
    this->iCount=0;
}
void SinglyCL:: Display(){

}
int SinglyCL:: count(){
    return iCount;
    
}

void SinglyCL:: Insertfirst(int iNo){
    
}
void SinglyCL:: InsertLast(int iNo){
    
}
void SinglyCL:: InsertatPos(int iNo,int iPos){
    
}

void SinglyCL:: DeleteFirst(){
    
}
void SinglyCL:: DeleteLast(){
    
}
void SinglyCL:: DeleteatPos(int iPos){
    
}

int main(){
    SinglyCL Sobj;

    return 0;
}
