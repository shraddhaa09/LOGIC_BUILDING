//Input : 11
// output : * * * # # # * * * # # 

import java.util.Scanner;

public class program188 {

    public static void Display(int iNo) {
        int iCnt=0;
        int iCount=1;
        for(iCnt=1;iCnt<=iNo;iCnt++){
            if(iCount==3){
                iCount=0;
            }
            while(iCount!=3){
            System.out.print("* \t");
            iCount++;
            }
        }
        System.out.println();
    }
    static void main(String A[]) {
        Scanner sobj=new Scanner(System.in);
        int iValue=0;

        System.out.println("Enter the number of the elements");
        iValue=sobj.nextInt();
        Display(iValue);
    }
}