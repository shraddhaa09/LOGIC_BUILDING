#include<iostream>
#include<string>
using namespace std;
class Cinema{
    private:
    int arr[100][100];
    int r;
    int c;

    public:
    Cinema(int rows, int columns) {
        r = rows;
        c = columns;
    }

    void Acceptseat(int r,int c){
        for(int i=0;i<r;i++){
            cout<<"Enter the seats for the row "<<i<<" : "<<endl;
            cout<<"Enter 1 to book seat and 0 for available seat"<<endl;
            for(int j=0;j<c;j++){
                cin>>arr[i][j];
                if(arr[i][j]!=0 && arr[i][j]!=1){
                    cout<<"Invalid Data"<<endl;
                    return ;
                }
            }
        }
    }
    void CountSeats() {
    int iCount = 0;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] == 1) {
                iCount++;
            }
        }
    }

    cout << "Total booked seats are: " << iCount << endl;
}

    void rowmaxSeats() {

        int iMax = 0;
        int maxRow = 0;

        for(int i = 0; i < r; i++) {

            int iSum = 0;

            for(int j = 0; j < c; j++) {
                iSum += arr[i][j];
            }

            if(iSum > iMax) {
                iMax = iSum;
                maxRow = i;
            }
        }

        cout << "Row with max bookings: " << maxRow << endl;
        cout << "Maximum bookings: " << iMax << endl;
    }

    void rowfull() {

        cout << "Completely full rows are: ";

        for(int i = 0; i < r; i++) {

            bool full = true;

            for(int j = 0; j < c; j++) {

                if(arr[i][j] == 0) {
                    full = false;
                    break;
                }
            }

            if(full) {
                cout << i << " ";
            }
        }

        cout << endl;
    }

    void seatmatrix(){
        cout<<"seat matrix "<<endl;

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<arr[i][j]<<"\t";
            }
            cout<<endl;
        }
    }


};
int main(){
    int r,c;
    cout<<"Enter the rows"<<endl;
    cin>>r;
    cout<<"Enter the columns"<<endl;
    cin>>c;
    Cinema cobj(r,c);
    cobj.Acceptseat(r,c);
    cobj.CountSeats();
    cobj.rowfull();
    cobj.rowmaxSeats();
    cobj.seatmatrix();
    return 0;
}