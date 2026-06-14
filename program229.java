/*
*
*       *
*       $       *
*       $       $       *
*       *       *       *       *

*/


import java.util.Scanner;

class Pattern
{
    public void  Display(int iRow,int iCol){
        int i=0,j=0;
        char ch='a';
        if(iRow!=iCol){
            System.err.println("Invalid parameters");
            System.err.println("Number of rows and column should be same");
            return;
        }
        for(i=1;i<=iRow;i++)
        {   
            for(j=1;j<=i;j++){
                if(i==j || j==1 || i==iRow){
                    System.out.print("*\t");
                }
                else{
                    System.out.print(" \t");
                }
            }
                System.out.println();
            }           
        }
}

class program229 {
    public static void main(String A[]){
        Scanner sobj=new Scanner(System.in);
        int iValue1=0,iValue2=0;

        System.out.println("Enter number of rows");
        iValue1=sobj.nextInt();

        System.out.println("Enter number of columns");
        iValue2=sobj.nextInt();

        Pattern pobj= new Pattern();
        pobj.Display(iValue1,iValue2);
    }
}
