import java.util.*;

class DigitX
{
    public int sumEvenDigits(int iNo)
    {
        int iDigit=0;
        int iSum = 0;
        
        while(iNo != 0)
        {
            iDigit=iNo%10;
            if(iDigit%2==0){
                iSum+=iDigit;
            }
            iNo = iNo / 10;
        }
        return iSum;
    }
}
class program91
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter Number :");
        iValue = sobj.nextInt();

        iRet = dobj.sumEvenDigits(iValue);
        System.out.println("summation of even digits : " + iRet);

    }
}