import java.util.Scanner;

public class program261 {
    public static void main(String A[]){
        Scanner sobj=new Scanner(System.in);
        String Arr=null;//Arr is string not array 

        System.out.println("Enter String");
        Arr=sobj.nextLine();
        //ERROR
        System.out.println(Arr[0]);
        System.out.println(Arr[1]);
        System.out.println(Arr[2]);
    }
}
