import java.util.Scanner;

class ArrayX{
    public void update(int Arr[]){
        int iCnt=0;

        for(iCnt=0;iCnt<Arr.length;iCnt++){
            Arr[iCnt]++;
        }
    }
}
class program147{


        public static void main(){
            Scanner sobj = new Scanner(System.in);
            int Arr[]={10,20,30,40,50};

            System.out.println("Array elements before function call:");
            for(int iCnt=0;iCnt<Arr.length;iCnt++)
            {
                System.out.println(Arr[iCnt]);
            }

        
        ArrayX aobj = new ArrayX();
        aobj.update(Arr);

            System.out.println("Array elements after function call:");
            for(int iCnt=0;iCnt<Arr.length;iCnt++)
            {
                System.out.println(Arr[iCnt]);
            }

}
}