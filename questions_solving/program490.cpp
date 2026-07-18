#include<iostream>
using namespace std;

class ArrayX{
    public:
        T *Arr;
        int Size;
    ArrayX(int No){}
    ~ArrayX(){}
    void Accept(){}
    void Display(){}
    int summation(){}

};
ArrayX ::ArrayX(){
    Size=No;
    Arr=new T(Size);
}
ArrayX ::~ArrayX(){
    delete []Arr;
}
void ArrayX :: Accept(){
        int i=0;
        cout<<"Enter the elements:\n";
        for(i=0;i<Size;i++){
            cin>>Arr[i];
        }
    }
void ArrayX :: Display(){
    int i=0;
    cout<<"Elements of the array are: \n";
    for(i=0;i<Size;i++){
        cout<<Arr[i]<<"\n";
    }
}
int ArrayX :: summation(){
    int i=0;
    int sum=0;
    cout<<"Elements of the array are: \n";
    for(i=0;i<Size;i++){
            
        sum=sum+Arr[i];
    }
    return sum;
}
int main(){
    ArrayX <float>aobj(5);

    aobj.Accept();
    aobj.Display();

    cout<<"Summation is : "<<aobj.summation()<<"\n";

    return 0;
}