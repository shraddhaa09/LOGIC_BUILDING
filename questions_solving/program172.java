//Input : 5
// output : 1 2 3 4 5
import java.util.Scanner;

public class program172 {

    public static void Display(int iNo) {
        int iCnt=0;
        for(iCnt=1;iCnt<=iNo;iCnt++){
            System.out.print(iCnt+"\t");
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
