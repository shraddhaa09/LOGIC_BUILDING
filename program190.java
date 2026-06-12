//Input : 
// output : * * * *
//          * * * *

import java.util.Scanner;

public class program190 {

    public static void Display() {
        int iCnt=0;
        for(iCnt=1;iCnt<=4;iCnt++){
            System.out.print("*\t");
        }
        System.err.println();
        
        for(iCnt=1;iCnt<=4;iCnt++){
            System.out.print("*\t");
        }
        System.err.println();

        for(iCnt=1;iCnt<=4;iCnt++){
            System.out.print("*\t");
        }
        System.err.println();
    }
    static void main(String A[]) {
        Scanner sobj=new Scanner(System.in);
        int iValue=0;

       // System.out.println("Enter the number of the elements");
       // iValue=sobj.nextInt();
        Display();
    }
}