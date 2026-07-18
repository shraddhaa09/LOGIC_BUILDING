#include<iostream>
using namespace std;

template <class T>
class ArrayX{
    public:
        T *Arr;
        int Size;
    ArrayX(int No){
        Size=No;
        Arr=new T(Size);
    }
    ~ArrayX(){
        delete []Arr;
    }
    void Accept(){
        int i=0;
        cout<<"Enter the elements:\n";
        for(i=0;i<Size;i++){
            cin>>Arr[i];
        }
    }
    void Display(){
        int i=0;
        cout<<"Elements of the array are: \n";
        for(i=0;i<Size;i++){
            cout<<Arr[i]<<"\n";
        }
    }
    int summation(){
        int i=0;
        T sum=0;
        for(i=0;i<Size;i++){
               
            sum=sum+Arr[i];
        }
        return sum;
    }

};
int main(){
    ArrayX <int >aobj(5);

    aobj.Accept();
    aobj.Display();

    cout<<"Summation is : "<<aobj.summation()<<"\n";

    return 0;
}