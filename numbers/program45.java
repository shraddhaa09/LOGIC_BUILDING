//type 3 

import java.util.Scanner;

class NumberX{//why X-> for understanding purpose only
    public boolean checkDivisible(int iNo){

        if((iNo % 3 == 0) && (iNo % 5 == 0)){
            return true;
        }
        else{
            return false;
        }
}
}
class program45 {
    public static boolean checkDivisible(int iNo){

        if((iNo % 3 == 0) && (iNo % 5 == 0)){
            return true;
        }
        else{
            return false;
        }
}

    public static void main(String A[]){

        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet; 

        System.out.print("Enter number : ");
        iValue = sobj.nextInt();

        //
        NumberX nobj= new NumberX();
        bRet =nobj.checkDivisible(iValue);
        if(bRet == true){
            System.out.println("Number is divisible by 3 and 5");
        }
        else{
            System.out.println("Number is not divisible by 3 and 5");
        }
    }
}