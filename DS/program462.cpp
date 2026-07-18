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

}
void stack::push(int iNo){

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


    return 0;
}