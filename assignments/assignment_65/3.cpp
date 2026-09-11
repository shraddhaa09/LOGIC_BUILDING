#include<iostream>
#include<string>
using namespace std;
class hospital{
    private:
    string name;
    int severity;
    public:
    void accept(){
        cout<<"Enter name:";
        cin>>name;

        cout<<"Enter severity:";
        cin>>severity;

        cin.ignore(1000,'\n');
    }
    string getName(){
        return name;
    }
    int getMarks(){
        return severity;
    }

    void display(){
        cout << name << endl;
    }


};
int  main(){
    int n;
    cout<<"Enter number of patients:";
    cin>>n;

    hospital *h=new hospital[n];

    for(int i = 0; i < n; i++) {
        h[i].accept();
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(h[i].getMarks()<h[j].getMarks()){
                hospital temp=h[i];
                h[i]=h[j];
                h[j]=temp;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        h[i].display();
    }


    

    return 0;
}
