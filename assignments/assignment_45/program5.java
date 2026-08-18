import java.io.*;
import java.util.*;

class program5{
    public static void main(String A[]){
        Scanner sobj=new Scanner(System.in);

        System.out.print("Enter directory name: ");
        String dirname=sobj.nextLine();

        File directory=new File(dirname);

     if(!directory.exists())
        {
            System.out.println("Directory does not exist.");
            return;
        }


        String[] names = directory.list();

        System.out.println("Files in directory:");

        for(String name : names)
        {
            System.out.println(name);
        }
        sobj.close();
    }
}