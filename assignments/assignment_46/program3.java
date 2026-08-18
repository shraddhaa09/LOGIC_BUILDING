import java.io.*;
import java.util.*;

class program3 {
    public static void main(String[] args) throws IOException
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter directory name: ");
        String dirname = sc.nextLine();

        File dir = new File(dirname);

        if (dir.mkdir()) {
            System.out.println("Directory created successfully");
        } else {
            System.out.println("Directory could not be created.");
        }

    }

}