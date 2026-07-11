import java.util.*;
class StringX{
    public void display(String str){
        System.out.println("Recived string is: "+str);
    }
}

class program268{
    public static void main(String[] A)
    {
        Scanner sobj=new Scanner(System.in);
        String str=null;
        StringX strobj=new StringX();

        System.out.println("Enter string : ");
        str=sobj.nextLine();

        strobj.display(str);
        

    }
}