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

    public int CountSmall(String str){
        int i=0;
        int count=0;

        char Arr[]=str.toCharArray();
        for(i=0;i<Arr.length;i++)
        {
            if(Arr[i]>='a' && Arr[i]<='z'){
            count++;
            }
        }
        return count;
    }

    public int CountDigits(String str){
        int i=0;
        int count=0;

        char Arr[]=str.toCharArray();
        for(i=0;i<Arr.length;i++)
        {
            if(Arr[i]>='0' && Arr[i]<='9')
            {
            count++;
            }
        }
        return count;
    }

    public int CountSpace(String str){
        int i=0;
        int count=0;

        char Arr[]=str.toCharArray();
        for(i=0;i<Arr.length;i++)
        {
            if(Arr[i]==' ')
            {
            count++;
            }
        }
        return count;
    }

    public int CountSpecial(String str){
        int i=0;
        int count=0;

        char Arr[]=str.toCharArray();
        for(i=0;i<Arr.length;i++)
        {
            if((Arr[i]>='!' && Arr[i]<='/')||
                (Arr[i]>=':' && Arr[i]<='@')||
                (Arr[i]>='[' && Arr[i]<='`')||
                (Arr[i]>='{' && Arr[i]<='~'))
            {
            count++;
            }
        }
        return count;
    }

}

class program275{
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