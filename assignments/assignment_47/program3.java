import java.io.*;
import java.util.*;

class program3 {
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

        System.out.println("\nwritten all the files data from the directory into the demo.txt:");

        int ch;

        if (files != null) {
            for (File file : files) {
                if (file.isFile()) {
                    FileInputStream file2 = new FileInputStream(file);                    file1.write('\n');

                    while((ch=file2.read())!=-1){
                        file1.write(ch);
                    }
                    file2.close();
                    file1.write('\n');
                }
            }
        }
        file1.close();
         System.out.println("Operation completed successfully.");
    }
}