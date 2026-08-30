import java.util.*;

// command line arguments
// java program951.java programming

public class program951{
    public static void main(String A[]){

        if(A.length != 1){
            System.out.println("Invalid number of arguments");
            return;
        }

        String str = A[0];

        TreeMap<Character,Integer> frequency =new TreeMap<Character,Integer>();//better to use hashmap then so we will use linkedhasmap

        for(char ch : str.toCharArray()){
            frequency.put(ch, frequency.getOrDefault(ch, 0) + 1);
        }

        System.out.println(frequency);

        //issue in ordering
        
    }
}