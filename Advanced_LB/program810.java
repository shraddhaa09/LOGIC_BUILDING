//145

//1!+4!+5!


import java.io.*;
class program810{
    public static void main(String A[]) throws Exception{
        int iNo=0;
        long iFact=0;

        BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter Number:");
        iNo= Integer.parseInt(bobj.readLine());

        iFact=1;

        if(iSum>iTemp){
            break;
        }

        int iTemp=0,iDigit=0;
        long iSum=0;

        iTemp=iNo;

        while(iNo!=0){
            iDigit=iNo%10;
                while(iDigit!=0){
                    iFact=iFact*iDigit;
                    iDigit--;
                }
            iSum=iSum+iFact;
            iNo=iNo/10;
            iFact=1;
        }

        if(iSum==iTemp){
            System.out.println("It is  a strong number");
        }
        else{
            System.out.println("It is not a strong number");
        }
        
    }
}