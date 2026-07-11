import java.util.*;

class StringX{
    public String toUpperX(String str){
        int i=0;
        char Arr[]=str.toCharArray();//convert to the array
        for(i=0;i<Arr.length;i++){
            Arr[i]= (char)(Arr[i]-32);//ISSUE
        }
        String ret=new String(Arr);//array to the string
        return ret;
    }
}
class program285{
    public static void main(String[] A)
    {
        Scanner sobj=new Scanner(System.in);
        String data=null;
        StringX strobj=new StringX();
        int iRet=0;
        String sRet=null;

        System.out.println("Enter string : ");
        data=sobj.nextLine();

        sRet=strobj.toUpperX(data);

        System.out.println("Upper: "+sRet);
        
    }
}