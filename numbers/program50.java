import java.util.Scanner;

class NumberX {

    public boolean CheckPerfect(int iNo){

        int iCnt = 0;
        int iSum = 0;
        for(iCnt = 1; iCnt <= (iNo / 2); iCnt++){

            if(iNo % iCnt == 0){
                iSum += iCnt;
            }
        }
        if (iSum == iNo) {
            return true;
        } else {
            return false;
        }
    }
}

class program50 {

    public static void main(String A[]){

        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean iRet = false;

        System.out.print("Enter number : ");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();

        iRet = nobj.CheckPerfect(iValue);
        if(iRet == true){
            System.out.println("Number is perfect");
        }
        else{
            System.out.println("Number is imperfect");
        }

}
}
//time complexity is O(N/2)
//where N>=0