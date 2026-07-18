#include<iostream>
#pragma pack(1)

template <class T>

using namespace std;
struct node
{
    int data;
    struct node *next;
};

template <class T>

class stack
{
private:
    struct node<T> *first;
    int iCount;
        
public:
    stack();
    void push(T iNo);//insertfirst
    T pop();         //deletefirst
    T peep();        //deletefirst
    void display();
    int count();
    
};
stack<T>::stack(){
    this->first=NULL;
    this->iCount=0;

}

template <class T>

void stack<T>::push(int iNo){
    struct node<T> *newn=NULL;
    newn=new struct node<T>();

    newn->data=iNo;
    newn->next=NULL;

    newn->next=first;
    first=newn;
    
    iCount++;
}

template <class T>

T stack<T>:: pop(){
    T iValue=0;
    struct node<T> *temp=NULL;
    
    if(first==NULL){
        cout<<"Stack is empty\n";
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

template <class T>


T stack<T>:: peep(){
    T iValue=0;
    
    if(first==NULL){
        cout<<"Stack is empty\n";
        return -1;
    }
    else{
        iValue=first->data;
        return iValue;   
    }
    return 0;

}    

template <class T>

void stack<T>:: display(){
    struct node<T> *temp=NULL;

    temp=first;
    while (temp!=NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp=temp->next;
    }  
    

}
template <class T>

int stack<T>:: count(){
    return iCount;

}

int main(){

    stack<int> sobj;
    int iRet=0;

    sobj.push(11);
    sobj.push(21);
    sobj.push(51);
    sobj.push(101);

    sobj.display();
    iRet=sobj.count();
    cout<<"Elements of the stack are: "<<iRet<<"\n";
    
    iRet=sobj.pop();

    cout<<"Poped element is:"<<iRet<<"\n";

    sobj.display();
    iRet=sobj.count();
    cout<<"Elements of the stack are: "<<iRet<<"\n";

    iRet=sobj.peep();

    cout<<"Peeped element is:"<<iRet<<"\n";

    sobj.display();
    iRet=sobj.count();
    cout<<"Elements of the stack are: "<<iRet<<"\n";
    


    return 0;
}