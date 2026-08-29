import java.util.*;

class program885{
    public static void main(String A[]){
        int Arr[]={10,13,7,21,15};

        for(int no:Arr){
            System.out.println(no+"\t");
        }
        System.out.println();

        Arrays.sort(Arr);//Note->Arrays

        for(int no:Arr){
            System.out.println(no+"\t");
        }
        System.out.println();
        
    }
}