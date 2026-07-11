//Input : 7
// output : a b c d e f g

import java.util.Scanner;

public class program181 {

    public static void Display(int iNo) {
        int iCnt=0;
        char ch='\0';
        int count=0;// here i was trying to print only the 26 alphabates
        for(iCnt=1,ch=97;iCnt<=iNo;iCnt++,ch++){
            whi
            System.out.print(ch+" \t");
            count++;
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