//type 2 ( different approach)

import java.util.Scanner;

public class program43 {

    public static boolean checkDivisible(int iNo){

        if((iNo % 3 == 0) && (iNo % 5 == 0)){
            //System.out.println("Number is divisible by 3 and 5");
            return true;
        }
        else{
            //System.out.println("Number is not divisible by 3 and 5");
            return false;
        }
    }

    public static void main(String A[]){

        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet; 

        System.out.print("Enter number : ");
        iValue = sobj.nextInt();

        // Static method call
        bRet = checkDivisible(iValue);
        if(bRet == true){
            System.out.println("Number is divisible by 3 and 5");
        }
        else{
            System.out.println("Number is not divisible by 3 and 5");
        }
    }
}