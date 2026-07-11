import java.util.*;

class StringX{
    public String Update(String str[]){
        int i=0;
        char Arr[]=str.toCharArray();//convert to the array
        for(i=0;i<Arr.length;i++){
            if(Arr[i]=='A' || Arr[i]=='a'){
                Arr[i]='_';//here can we add character example SS yes as well as no no because the size of the array is fixed so we can not add new character in the array and yes but it will heavy as we have to move one character to the right and then add the new character in the array so it will take more time so we can not add new character in the array but we can replace the character in the array with new character
            }
        }

        return new String(Arr);

    }
}
class program279{
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