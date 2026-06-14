/*
1 $       $       $       $
2 #       #       #       #
3 $       $       $       $
4 #       #       #       #
*/


import java.util.Scanner;

class Pattern
{
    public void  Display(int iRow,int iCol){
        int i=0,j=0;
        char Arr[]={'#','$'};//special symbol and in java array size is not needed ot write 
        for(i=1;i<=iRow;i++)//201 -> remove if else condition
        {
            for(j=1;j<=iCol;j++){
                System.out.print(Arr[i%2]+"\t");
            }
            System.out.println();
        }
    }     
}
class program202 {
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
