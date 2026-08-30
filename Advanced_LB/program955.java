import java.util.*;

// command line arguments
// java program953.java programming

public class program955{
    public static void main(String A[]){

        if(A.length != 1){
            System.out.println("Invalid number of arguments");
            return;
        }

        String str = A[0];

        LinkedHashMap<Character,Integer> frequency =new LinkedHashMap<Character,Integer>();

        for(char ch : str.toCharArray()){
            frequency.put(ch, frequency.getOrDefault(ch, 0) + 1);
        }

        for(Map.Entry<Integer,Character>eobj:frequency.entrySet()){
            if(eobj.getValue==1){
                System.out.println("First non-repeating character is : "eobj.getKey);
                break;
            }
        }
        

        
    }
}