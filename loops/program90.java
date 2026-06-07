import java.util.*;

class DigitX
{
    public int sumDigits(int iNo)
    {
        int iSum = 0;
        
        while(iNo != 0)
        {
            iSum+=iNo % 10;
            iNo = iNo / 10;
        }
        return iSum;
    }
}
class program90
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter Number :");
        iValue = sobj.nextInt();

        iRet = dobj.sumDigits(iValue);
        System.out.println("summation of digits : " + iRet);

    }
}