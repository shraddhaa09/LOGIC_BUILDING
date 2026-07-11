import java.util.*;
import Marvellous.StringX;

class program277{
    public static void main(String[] A)
    {
        Scanner sobj=new Scanner(System.in);
        String data=null;
        StringX strobj=new StringX();
        int iRet=0;

        System.out.println("Enter string : ");
        data=sobj.nextLine();

        iRet=strobj.CountCaptial(data);
        System.out.println("Number of capital characters: "+iRet);

        iRet=strobj.CountSmall(data);
        System.out.println("Number of small characters: "+iRet);

        iRet=strobj.CountDigits(data);
        System.out.println("Count of Numbers is: "+iRet);

        iRet=strobj.CountSpace(data);
        System.out.println("Count of Spaces are: "+iRet);

        iRet=strobj.CountSpecial(data);
        System.out.println("Count of Special Symbols: "+iRet);
        
    }
}