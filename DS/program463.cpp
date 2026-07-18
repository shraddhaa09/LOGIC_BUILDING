#include<iostream>
#pragma pack(1)
using namespace std;
struct node
{
    int data;
    struct node *next;

};

class stack
{
private:
    struct node *first;
    int iCount;
        
public:
    stack();
    void push(int iNo);//insertfirst
    int pop();         //deletefirst
    int peep();        //deletefirst
    void display();
    int count();
    
};
stack::stack(){
    this->first=NULL;
    this->iCount=0;

}
void stack::push(int iNo){
    struct node *newn=NULL;
    newn=new struct node();

    newn->data=iNo;
    newn->next=NULL;

    if(this->first==NULL){
        this->first=newn;
    }
    else{
        newn->next=first;
        first=newn;

    }
    iCount++;
}
int stack:: pop(){
    return 0;

}       
int stack:: peep(){
    return 0;

}        
void stack:: display(){

}
int stack:: count(){
    return iCount;

}

int main(){

    stack sobj;
    int iRet=0;

    sobj.push(11);
    sobj.push(21);
    sobj.push(51);
    sobj.push(101);

    iRet=sobj.count();

    cout<<"Elements of the stack are: "<<iRet<<"\n";

    return 0;
}