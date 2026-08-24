#include<iostream>
#include<string.h>
using namespace std;
class Stdperformance{
    private:
    int marks[100][100];
    int n;
    int ns ;
    public:
    void Acceptsubjects(int n,int ns){
        this->n=n;
        this->ns=ns;
        if(n<0 || ns<0){
            cout<<"Invalid Input"<<endl;
            return;
        }
        cout<<"enter the marks for the subject"<<endl;
        for(int i=0;i<n;i++){
            cout<<"Enter the marks for the student "<<i<<":"<<endl;
            for(int j=0;j<ns;j++){
                cin>>marks[i][j];
                if(marks[i][j]<0 || marks[i][j]>100){
                    cout<<"Invalid Input.Marks must be between 0 and 100."<<endl;
                    return;
                }
            }
        }
    }

    void totalmarks(){
     cout << "\nTotal marks of each student:" << endl;
        int iSum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<ns;j++){
                iSum+=marks[i][j];
            }
            cout<<"Student "<<i+1<<" : "<<iSum<<endl;
        }
    }
    void calculateavg()
    {
        cout << "\nAverage marks of each subject:" << endl;

        for (int j = 0; j < ns; j++)
        {
            int iSum = 0;

            for (int i = 0; i < n; i++)
            {
                iSum += marks[i][j];
            }

            double avg = (double)iSum / n;

            cout << "Subject " << j + 1
                 << " : " << avg << endl;
        }
    }
    void failedstud()
    {
        cout << "\nStudents who failed in any subject:" << endl;

        bool found = false;

        for (int i = 0; i < n; i++)
        {
            bool failed = false;

            for (int j = 0; j < ns; j++)
            {
                if (marks[i][j] < 35)
                {
                    failed = true;
                    break;
                }
            }

            if (failed)
            {
                cout << "Student " << i + 1 << endl;
                found = true;
            }
        }

        if (!found)
        {
            cout << "No student failed." << endl;
        }
    }



};

int main(){
    int studentnumber;
    int stdsubject;
    cout<<"Enter the student number"<<endl;
    cin>>studentnumber;
    cout<<"Enter the number of the subjects"<<endl;
    cin>>stdsubject;

    if (studentnumber <= 0 || stdsubject <= 0)
    {
        cout << "Invalid Input" << endl;
        return 0;
    }

    Stdperformance sobj;

    sobj.Acceptsubjects(studentnumber,stdsubject);
    sobj.totalmarks();
    sobj.calculateavg();
    sobj.failedstud();

    return 0;
}