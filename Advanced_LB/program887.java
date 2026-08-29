import java.util.*;

class program887{
    public static void main(String A[]){
        Integer Arr[]={10,13,34,21,15,7,24};//Wrapper class as we are using collection

        for(int no:Arr){
            System.out.println(no+"\t");
        }
        System.out.println();

        Arrays.sort(Arr,Collections.reverseOrder());//Note****

        for(int no:Arr){
            System.out.println(no+"\t");
        }
        System.out.println();
        
    }
}