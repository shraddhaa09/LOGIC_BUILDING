import java.io.*;
import java.util.*;

class program2{
    public static void main(String A[]) throws IOException{
        Scanner sobj=new Scanner(System.in);

        System.out.print("Enter file name: ");
        String filename=sobj.nextLine();

        System.out.print("Enter data: ");
        String data = sc.nextLine();

        FileWriter fwobj=new FileWriter(filename,true);//Write at the end.

        fwobj.write(data);

        fwobj.close();
        sobj.close();
    }
}