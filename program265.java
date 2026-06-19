import java.util.Scanner;

public class program265 {
    public static void main(String A[]){
        Scanner sobj=new Scanner(System.in);
        String Arr=null;

        System.out.println("Enter String");
        Arr=sobj.nextLine();
        System.out.println("Length of string is:"+Arr.length());//lenght is in built

        char str[]=Arr.toCharArray();//string to array conversion 
        int i=0;
        for(i=0;i<Arr.length();i++){
            System.out.println(str[i]);//charAt is heavy
        }
    }
}
