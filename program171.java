
import java.util.Scanner;

public class program171 {

    public static void Display(int iNo) {
        int iCnt=0;
        for(int i=1;iCnt<=iNo;iCnt++){
            System.out.print("*\t");
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
