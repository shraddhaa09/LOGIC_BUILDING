import java.util.*;

class StringX{
    public String Update(String str[]){
        int i=0;
        char Arr[]=str.toCharArray();//convert to the array
        for(i=0;i<Arr.length;i++){
            if(Arr[i]=='A' || Arr[i]=='a'){
                Arr[i]='_';
            }
        }
        String ret=new String(Arr);//array to the string
        return ret;

    }
}
class program278{
    public static void main(String[] A)
    {
        Scanner sobj=new Scanner(System.in);
        String data=null;
        StringX strobj=new StringX();
        int iRet=0;
        String sRet=null;

        System.out.println("Enter string : ");
        data=sobj.nextLine();

        sRet=strobj.Update(data);

        System.out.println("the updated string is: "+sRet);
        
    }
}