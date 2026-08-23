import java.util.*;

class program771
{
    public static void main(String A[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter string: ");
        String str=sobj.nextLine();

        char Arr[]=str.toCharArray();

        //in keyword this is for only but this is for each loop at time of  exceution 
        //in php we write for each as keyword 
        //drawback haawa tas condition ne nahi jau shakat sequence nic java lagel 
        for(char ch:Arr)
        {
            System.out.println(ch);
        }
    }
}