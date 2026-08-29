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

final class Searching extends ArrayX {

    public Searching(int iSize) {
        super(iSize);
    }

    public boolean LinearSearch(int iNo) {

        for (int i = 0; i < iSize; i++) {
            if (Arr[i] == iNo) {
                return true;
            }
        }

        return false;
    }

    public boolean BidirectionalSearch(int iNo) {

        int iStart = 0;
        int iEnd = iSize - 1;

        while (iStart <= iEnd) {

            if (Arr[iStart] == iNo || Arr[iEnd] == iNo) {
                return true;
            }

            iStart++;
            iEnd--;
        }

        return false;
    }

    public boolean CheckSorted() {

        for (int i = 0; i < iSize - 1; i++) {

            if (Arr[i] > Arr[i + 1]) {
                return false;
            }
        }

        return true;
    }

    public boolean BinarySearch(int iNo) {

        int iStart = 0;
        int iEnd = iSize - 1;

        // Binary search requires sorted array
        if (CheckSorted() == false) {
            return BidirectionalSearch(iNo);
        }

        // Element outside range
        if (iNo < Arr[iStart] || iNo > Arr[iEnd]) {
            return false;
        }

        while (iStart <= iEnd) {

            int iMid = iStart + ((iEnd - iStart) / 2);

            if (Arr[iMid] == iNo) {
                return true;
            }
            else if (iNo < Arr[iMid]) {
                iEnd = iMid - 1;
            }
            else {
                iStart = iMid + 1;
            }
        }

        return false;
    }
}

final class Sorting extends ArrayX {

    public Sorting(int iSize) {
        super(iSize);
    }

    public void Bubblesort() {

        int temp;

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
    }
    public void BubblesortEfficinet() {

        int i=0,temp=0;
        boolean bFlag=true;

        for (i = 0; (i < iSize - 1) && (bFlag==true); i++) {//NOTEE*****(so here tleast 1 pass will be there )
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
    }
}

class program892 {

    public static void main(String A[]) {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements:");
        int iSize = sobj.nextInt();

        Sorting srobj = new Sorting(iSize);

        srobj.Accept();
        srobj.Display();

        srobj.BubblesortEfficinet();

        System.out.println("\nFinal sorted array:");
        srobj.Display();
    }
}