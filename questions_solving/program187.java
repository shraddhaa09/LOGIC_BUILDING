//Input : 7
// output : A * C * E * G
//          1 2 3 4 5 6 7
import java.util.Scanner;

public class program187 {

    public static void Display(int iNo) {
        int iCnt=0;
        char ch1='\0';
        char ch2='\0';
        for(iCnt=1,ch1='A',ch2='a';iCnt<=iNo;iCnt++,ch1++,ch2++){
            if(iCnt%2!=0){
            System.out.print(ch1+" \t");
            }
            else{
                System.out.print(ch2+"\t");
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