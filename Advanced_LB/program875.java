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
    public boolean LinearSearch(int iNo){
        int i=0;
        boolean bFlag=false;

        for(i=0;i<super.iSize;i++){
                if(Arr[i]==iNo){
                    bFlag=true;
                    break;
                }
        }
        return bFlag;
    }
    public boolean BidirectionalSearch(int iNo){
        int iStart=0,iEnd=0;

        boolean bFlag=false;
        iStart=0;
        iEnd=super.iSize-1;

        while(iStart<=iEnd){
            if(Arr[iStart]==iNo || Arr[iEnd]==iNo){
                bFlag=true;
                break;
            }
            iStart++;
            iEnd--;
        }
        return bFlag;
    }
}


class program875{
    public static void main(String A[]) {

        Searching sobj=new Searching(5);

        sobj.Accept();
        sobj.Display();

        //best->0(1) and worst->0(N)

        if(sobj.BidirectionalSearch(30)){
            System.out.println("Element is present");
        }
        else{
            System.out.println("Element is not present");
        }
    }
}