import java.util.Scanner;

class NumberX {

    public void DisplayFactors(int iNo){

        for(int iCnt = 1; iCnt < iNo; iCnt++){

            if(iNo % iCnt == 0){
                System.out.println(iCnt);
            }
        }
    }
}

class program46 {

    public static void main(String A[]){

        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.print("Enter number : ");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();

        nobj.DisplayFactors(iValue);
    }
}

//time complexity is O(N) where N is the input number because we are iterating from 1 to N to find the factors.
//space complexity is O(1) because we are not using any extra space that grows with the input size, we are just using a few variables to store the input and loop counter.