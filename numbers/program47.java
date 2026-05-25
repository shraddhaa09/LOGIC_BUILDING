import java.util.Scanner;

class NumberX {

    public void DisplayFactors(int iNo){

        for(int iCnt = 1; iCnt <= (iNo / 2); iCnt++){

            if(iNo % iCnt == 0){
                System.out.println(iCnt);
            }
        }
    }
}

class program47 {

    public static void main(String A[]){

        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.print("Enter number : ");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();

        nobj.DisplayFactors(iValue);
    }
}
//time complexity is O(N/2)
//where N>=0