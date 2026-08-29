import java.util.*;

class program886{
    public static void main(String A[]){
        int Arr[]={10,13,34,21,15,7,24};

        for(int no:Arr){
            System.out.println(no+"\t");
        }
        System.out.println();

        Arrays.sort(Arr,2,6);//Note->Arrays

        for(int no:Arr){
            System.out.println(no+"\t");
        }
        System.out.println();
        
    }
}