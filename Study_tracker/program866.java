import java.util.*;

class program866 {
    public static void main(String A[]) {

        TreeMap<Integer, String> hobj = new TreeMap<Integer, String>();

        hobj.put(20, "C programming");
        hobj.put(10, "Java programming");
        hobj.put(30, "C programming");
        hobj.put(10, "Java programming");
        hobj.put(30, "C programming");

        System.out.println(hobj);

        System.out.println("First Key: " + hobj.firstKey());
        System.out.println("Last Key: " + hobj.lastKey());

        System.out.println("First Entry: " + hobj.firstEntry());
        System.out.println("Last Entry: " + hobj.lastEntry());

        System.out.println("Higher than 20: " + hobj.higherKey(20));
        System.out.println("Lower than 20: " + hobj.lowerKey(20));
    }
}