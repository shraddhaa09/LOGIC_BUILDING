//x=3,y=5
//3*3*3*3*3

import java.io.*;
class program816{
    public static void main(String A[]) throws Exception{

        int iNo=0;
        int iCount=0;
        int iTemp=0;

        BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter Number as base:");
        iNo= Integer.parseInt(bobj.readLine());

        String str=String.valueOf(iNo);

        System.out.println("Number of digit are: "+str.length());
        
    }
}