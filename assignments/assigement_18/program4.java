package assignments.assigement_18;

class Logic{
    void sumEvenOddDigits(int n){
        int evenSum=0,oddSum=0;
        while(n>0){
            int digit=n%10;
            if(digit%2==0){
                evenSum+=digit;
            }
            else{
                oddSum+=digit;
            }
            n/=10;
        }
        System.out.println("Sum of even digits = "+evenSum);
        System.out.println("Sum of odd digits = "+oddSum);
    }
}

public class program4 {
    public static void main(String args[]){
        Logic obj=new Logic();
        obj.sumEvenOddDigits(12345);
    }
}
