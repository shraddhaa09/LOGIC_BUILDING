import java.util.Scanner;

class NumberX {

    public int SumFactors(int iNo){

        int iSum = 0;
        for(int iCnt = 1; iCnt <= (iNo / 2); iCnt++){

            if(iNo % iCnt == 0){
                iSum += iCnt;
            }
        }
        return iSum;
    }
}

class program48 {

    public static void main(String A[]){

        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;

        System.out.print("Enter number : ");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();

        iRet = nobj.SumFactors(iValue);
        System.out.println("Sum of factors: " + iRet);
    }
}
//time complexity is O(N/2)
//where N>=0