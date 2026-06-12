//Input : 7
// output : 1 * 2 * 3 * 4 
//          1 2 3 4 5 6 7
import java.util.Scanner;

public class program177 {

    public static void Display(int iNo) {
        int iCnt=0;
        int icount=1;
        for(iCnt=1;iCnt<=iNo;iCnt++){
            if(iCnt%2!=0){// we can use one more approach that is ino+1/2 and ino/2 in next code 
            System.out.print(icount+"\t");
            icount++;
            }
            else{
            System.out.print("*\t");
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