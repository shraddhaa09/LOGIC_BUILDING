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
    PNODE temp=NULL;

    if(first==NULL && last==NULL){
        return;
    }
    temp=first;
    do{
        cout<<"| "<<temp->data<<" | ->";
        temp=temp->next;
    }while(last->next!=temp);
    cout<<"\n";


}
int SinglyCL:: count(){
    return iCount;
    
}

void SinglyCL:: Insertfirst(int iNo){
    PNODE newn=NULL;
    newn=new NODE;
    newn->data=NULL;
    newn->next=NULL;
    if(first==NULL && last==NULL){
        first=newn;
        last=newn;
    }
    else{
        newn->next=first;
        first=newn;
    }
    last->next=first;
    iCount++;
}
void SinglyCL:: InsertLast(int iNo){
    PNODE newn=NULL;
    newn=new NODE;
    newn->data=NULL;
    newn->next=NULL;
    if(first==NULL && last==NULL){
        first=newn;
        last=newn;
    }
    else{
        last->next=newn;
        last=newn;
        
    }
    last->next=first;
    iCount++;
    
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
    int iRet=0;
    Sobj.Insertfirst(51);
    Sobj.Insertfirst(21);
    Sobj.Insertfirst(11);
    Sobj.InsertLast(101);
    Sobj.InsertLast(111);
    Sobj.InsertLast(121);

    Sobj.Display();
    return 0;
}
