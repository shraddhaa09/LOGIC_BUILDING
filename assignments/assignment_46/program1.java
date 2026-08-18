import java.util.*;
import java.io.*;
class program1{
    public static void main(String A[]) throws IOException
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the 1st filename");
        String Filename1=sobj.nextLine();

        FileInputStream file1=new FileInputStream(Filename1);

        System.out.println("Enter the 2nd filename");
        String Filename2=sobj.nextLine();

        FileOutputStream file2=new FileOutputStream(Filename2);

        int ch;

        while((ch=file1.read())!=-1){
            file2.write(ch);
        }
        file1.close();
        file2.close();

        System.out.println("File copied Successfully");

    }
}