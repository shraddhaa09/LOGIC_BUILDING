import java.util.Scanner;

class NumberX {

    public void SumFactors(int iNo){

        int iSum = 0;
        for(int iCnt = 1; iCnt <= (iNo / 2); iCnt++){

            if(iNo % iCnt == 0){
                iSum += iCnt;
            }
        }
        System.out.println("Sum of factors: " + iSum);//+ ->
    }
}

class program48 {

    public static void main(String A[]){

        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.print("Enter number : ");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();

        nobj.SumFactors(iValue);
    }
}
//time complexity is O(N/2)
//where N>=0