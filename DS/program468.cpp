#include<iostream>
#pragma pack(1)
using namespace std;
struct node
{
    int data;
    struct node *next;

};

class Queue
{
private:
    struct node *first;
    int iCount;
        
public:
    Queue();
    void Enqueue(int iNo);//insertlast
    int Dequeue();         //deletefirst
    int peep();        //deletefirst
    void display();
    int count();
    
};
Queue::Queue(){
    this->first=NULL;
    this->iCount=0;

}
void Queue::Enqueue(int iNo){
    struct node *newn=NULL;
    struct node *temp=NULL;

    newn=new struct node();

    newn->data=iNo;
    newn->next=NULL;

    if(first==NULL){
        first=newn;
    }
    else{
        temp=first;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        

    }
    
    
    iCount++;
}
int Queue:: Dequeue(){
    int iValue=0;
    struct node *temp=NULL;
    
    if(first==NULL){
        cout<<"Queue is empty\n";
        return -1;
    }
    else{
        iValue=first->data;
        temp=first;

        first=first->next;
        delete(temp);

        iCount--;

        return iValue;
    
    }

    return 0;

}       
void Queue:: display(){
    struct node *temp=NULL;

    temp=first;
    while (temp!=NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp=temp->next;
    }  
    

}
int Queue:: count(){
    return iCount;

}

int main(){

    Queue sobj;
    int iRet=0;

    sobj.Enqueue(11);
    sobj.Enqueue(21);
    sobj.Enqueue(51);
    sobj.Enqueue(101);

    sobj.display();
    iRet=sobj.count();
    cout<<"Elements of the Queue are: "<<iRet<<"\n";
    
    iRet=sobj.Dequeue();

    cout<<"Removed element is:"<<iRet<<"\n";

    sobj.display();
    iRet=sobj.count();
    cout<<"Elements of the queue are: "<<iRet<<"\n";


    return 0;
}