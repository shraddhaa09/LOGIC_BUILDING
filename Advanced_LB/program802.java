import java.io.*;
class program802{
    public static void mian(String A[]) throws Exception{
        int iNo=0;

        BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter Number:");
        iNo= Integer.parseInt(bobj.readLine());

        System.out.println("Input valure is:"+iNo);
    }
}