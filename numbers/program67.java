import java.util.Scanner;

class NumberX {

    public boolean CheckPrime(int iNo){

        int iCnt = 0;

        for(iCnt = 2; iCnt <= (iNo / 2); iCnt++){
            if(iNo % iCnt == 0){
                break;
            }
        }
        if (iCnt >= iNo / 2) {
            return false;// dry run for 11, iCnt will be 6 and loop will break and condition will be false
        } else {
            return true;
        }
    }
}

class program67{

    public static void main(String A[]){

        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean iRet = false;

        System.out.print("Enter number : ");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();

        iRet = nobj.CheckPrime(iValue);
        if(iRet == true){
            System.out.println("Number is prime");
        }
        else{
            System.out.println("Number is not prime");
        }

}
}
