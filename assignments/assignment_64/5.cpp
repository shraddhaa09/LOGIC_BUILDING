#include<iostream>
#include<string>
using namespace std;

class student{
private:
    string name;
    int marks;

public:

    void accept(){
        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter marks: ";
        cin >> marks;

        cin.ignore(1000, '\n');
    }

    int getMarks(){
        return marks;
    }

    string getName(){
        return name;
    }

    void display(){
        cout << name << " -> " << marks << endl;
    }
};

int main(){

    student s[5];

    for(int i = 0; i < 5; i++){
        s[i].accept();
    }

    // Descending order
    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){

            if(s[i].getMarks() < s[j].getMarks()){

                student temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
            else if(s[i].getMarks()==s[j].getMarks()){
               if(s[i].getName() > s[j].getName()){

                    student temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                } 
            }
        }
    }

    cout << "\nStudents in descending order:\n";

    for(int i = 0; i < 5; i++){
        s[i].display();
    }

    return 0;
}