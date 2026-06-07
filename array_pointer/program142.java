import java.util.*;

class program142 {
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt=0;

        System.out.println("enter the number of the elements:");
        int iLength = sobj.nextInt();//nextInt() method is used to take integer input from user
        
        int Brr[]=new int[iLength];//dynamic memory allocation for array

        System.out.println("enter the elements:");
        for(iCnt=0;iCnt<Brr.length;iCnt++){
            Brr[iCnt]=sobj.nextInt();
        }
        System.out.println("elements of array are:");
        for(iCnt=0;iCnt<Brr.length;iCnt++){
            System.out.println(Brr[iCnt]);
        }
        Brr=null;//null is used to free the memory allocated for array
        System.gc();//garbage collector is used to free the memory allocated for array
        //the difference between null and gc() is that null is used to free the memory allocated for array and gc() is used to free the memory allocated for array and other objects which are not used in the program
    }
}