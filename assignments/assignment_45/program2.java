import java.io.*;
import java.util.*;

class program2{
    public static void main(String A[]) throws IOException{
        Scanner sobj=new Scanner(System.in);

        System.out.print("Enter file name: ");
        String filename=sobj.nextLine();

        BufferedReader bobj=new BufferedReader(new FileReader(filename));

        String line;

        while((line=bobj.readLine())!=null){
            System.out.println(line);
        }
        bobj.close();
        sobj.close();
    }
}