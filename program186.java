//Input : 7
// output : A * C * E * G
//          1 2 3 4 5 6 7
import java.util.Scanner;

public class program186 {

    public static void Display(int iNo) {
        int iCnt=0;
        char ch='\0';
        for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++){
            if(iCnt%2!=0){
            System.out.print(ch+" \t");
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