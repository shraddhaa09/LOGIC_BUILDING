//Input : 7
// output : 1 * 3 * 5 * 7 
import java.util.Scanner;

public class program176 {

    public static void Display(int iNo) {
        int iCnt=0;
        for(iCnt=1;iCnt<=iNo;iCnt++){
            if(iCnt%2==0){// here note that we wil not use the if (iCnt%2!=0) 
            System.out.print("*\t");
            }
            else{
            System.out.print(iCnt+"\t");
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