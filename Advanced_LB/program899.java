import java.util.*;

interface GetterSetter {
    void Accept();
    void Display();
}

class ArrayX implements GetterSetter {
    protected int Arr[];
    protected int iSize;

    public ArrayX(int iSize) {
        this.iSize = iSize;
        Arr = new int[iSize];
    }

    public void Accept() {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements of the array:");

        for (int i = 0; i < this.iSize; i++) {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display() {
        System.out.println("The elements of the array are:");

        for (int i = 0; i < this.iSize; i++) {
            System.out.print(Arr[i] + "\t");
        }

        System.out.println();
    }
}
final class Sorting extends ArrayX {

    public boolean Issorted;

    public Sorting(int iSize) {
        super(iSize);
        Issorted=false;
    }

    public void Bubblesort() {

        int temp;

        if(Issorted==true){
            return;
        }

        for (int i = 0; i < iSize - 1; i++) {

            for (int j = 0; j < iSize - 1 - i; j++) {

                if (Arr[j] > Arr[j + 1]) {

                    temp = Arr[j];
                    Arr[j] = Arr[j + 1];
                    Arr[j + 1] = temp;
                }
            }

            System.out.println("Data after pass :"+ (i + 1));

            for (int j = 0; j < iSize; j++) {
                System.out.print(Arr[j] + "\t");
            }

            System.out.println();
        }
        Issorted=true;
    }
    public void BubblesortEfficinet() {

        int i=0,temp=0;
        boolean bFlag=true;

        if(Issorted==true){
            return;
        }

        for (i = 0;i < iSize - 1; i++) {
            if(bFlag==false){
                break;
            }
            bFlag=false;

            for (int j = 0; j < iSize - 1 - i; j++) {

                if (Arr[j] > Arr[j + 1]) {

                    temp = Arr[j];
                    Arr[j] = Arr[j + 1];
                    Arr[j + 1] = temp;

                    bFlag=true;//v.v.imp****
                }
            }
        }
        Issorted=true;
    }
    public void SelectionSort(){
        int i=0,j=0,temp=0;
        
        int min_index=0;
        if(Issorted==true){
            return;
        }
        for(i=0;i<iSize-1;i++){
            min_index=i;
            for(j=i+1;j<iSize;j++){
                if(Arr[j]<Arr[min_index]){
                    min_index=j;
                }
            }
            temp=Arr[i];
            Arr[i]=Arr[min_index];
            Arr[min_index]=temp;
        System.out.println("Data after pass :"+ (i + 1));
        Display();
        }
       Issorted=true; 
    }
    public void InsertionSort(){
        int i=0,j=0,selected=0;
        if(Issorted==true){
            return;
        }
        for(i=1;i<iSize;i++){
            selected=Arr[i];
            for(j=i-1;(j>=0) && (Arr[j]>selected);j++){
                Arr[j+1]=Arr[j];
            }
            Arr[j+1]=selected;
        }
        Issorted=true;
    }
}

class program899 {

    public static void main(String A[]) {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements:");
        int iSize = sobj.nextInt();

        Sorting srobj = new Sorting(iSize);

        srobj.Accept();
        srobj.Display();

        srobj.InsertionSort();

        System.out.println("\nFinal sorted array:");
        srobj.Display();
    }
}