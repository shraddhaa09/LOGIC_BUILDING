import java.util.*;
class StringX{
    public int CountCaptial(String str){
        int i=0;
        int count=0;
        for(i=0;i<str.length();i++)
        {
            if(str.charAt(i)>='A' && str.charAt(i)<='Z'){
            count++;
            }
        }
        return count;
    }
}

class program270{
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
        

    }
}