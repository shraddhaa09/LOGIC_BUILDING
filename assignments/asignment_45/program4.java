import java.io.*;
import java.util.*;

class program1{
    public static void main(String A[]){
        Scanner sobj=new Scanner(System.in);

        System.out.print("Enter file name: ");
        String filename=sobj.nextLine();

        File file=new File(filename);

        if(file.createNewFile())
        {
            System.out.println("File created successfully.");
        }
        else
        {
            System.out.println("File already exists.");
        }
        sobj.close();
    }
}