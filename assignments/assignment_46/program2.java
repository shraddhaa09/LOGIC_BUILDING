import java.io.*;
import java.util.*;

class program2 {
    public static void main(String[] args) throws IOException
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String filename = sc.nextLine();

        File file = new File(filename);

        if (file.exists()) {
            if (file.isFile()) {
                System.out.println("It is a regular file.");
            } else {
                System.out.println("It is not a regular file.");
            }
        } else {
            System.out.println("File does not exist.");
        }
    }
}