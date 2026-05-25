import java.util.Scanner;

class NumberX {

    public boolean CheckPrime(int iNo){

        int iCnt = 0;

        for(iCnt = 2; iCnt <= (iNo / 2); iCnt++){
            if(iNo % iCnt == 0){
                return false;// bad program->as in the os cpu will be busy in context switching and will not be able to utilize the cpu time efficiently. good program->as it will return false as soon as it finds a factor and will not waste time in checking for other factors. dry run for 11, iCnt will be 2,3,4,5 and loop will break and condition will be false
            }
        }
        return true;
    }
}

class program66{

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
