//type 2

import java.util.Scanner;//

public class program40 {
    void checkDivisible(int iNo){
        if((iNo%3==0) && (iNo%5==0)){
                System.out.println(x:"number is divisible by 3 and 5");
        }
        else{
            System.out.println(x:"number is not divisible by 3 and 5");
        }
    }

        public static void main(String A[]){
        Scanner sobj= new Scanner(System.in);

        int iValue=0;
        System.out.print(x: "Enter number :");
        iValue=sobj.nextInt();

        program40 obj= new program40();
        obj.checkDivisible(iValue);//error should be there for understanding 
    }
}
