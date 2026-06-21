import java.util.*;

class StringX{
    public String toUpperX(String str){
        int i=0;
        char Arr[]=str.toCharArray();//convert to the array
        for(i=0;i<Arr.length;i++){
            if(Arr[i]>='a' && Arr[i]<='z'){
                Arr[i]= (char)(Arr[i]-32);
            }
            
        }
        String ret=new String(Arr);//array to the string
        return ret;
    }
    public String toLowerX(String str){
        int i=0;
        char Arr[]=str.toCharArray();//convert to the array
        for(i=0;i<Arr.length;i++){
            if(Arr[i]>='A' && Arr[i]<='Z'){
                Arr[i]= (char)(Arr[i]+32);
            }
            
        }
        String ret=new String(Arr);//array to the string
        return ret;
    }
    public String toToggleX(String str){
        int i=0;
        char Arr[]=str.toCharArray();//convert to the array
        for(i=0;i<Arr.length;i++){
            if(Arr[i]>='A' && Arr[i]<='Z'){
                Arr[i]= (char)(Arr[i]+32);
            }
            else if(Arr[i]>='a' && Arr[i]<='z'){
                Arr[i]= (char)(Arr[i]-32);
            }
        }
        String ret=new String(Arr);//array to the string
        return ret;
    }
}
class program289{
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
        
        sRet=strobj.toLowerX(data);
        System.out.println("Lower: "+sRet);

        sRet=strobj.toToggleX(data);
        System.out.println("Toggle: "+sRet);
        
    }
}