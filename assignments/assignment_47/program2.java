import java.io.*;
import java.util.*;

class program2 {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter directory name: ");
        String dirname = sc.nextLine();

        File dir = new File(dirname);

        FileOutputStream file1=new FileOutputStream("demo.txt");

        if (!dir.exists()) {
            System.out.println("Directory does not exist.");
            return;
        }

        if (!dir.isDirectory()) {
            System.out.println("Given name is not a directory.");
            return;
        }

        File[] files = dir.listFiles();

        System.out.println("\nwritten all the files from the directory into the demo.txt:");

        if (files != null) {
            for (File file : files) {
                if (file.isFile()) {
                        file1.write(file.getName().getBytes());
                        file1.write('\n');
                }
            }
        }
        file1.close();
         System.out.println("Operation completed successfully.");
    }
}