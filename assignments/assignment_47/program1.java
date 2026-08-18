import java.io.*;
import java.util.*;

class program1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter directory name: ");
        String dirname = sc.nextLine();

        File dir = new File(dirname);

        if (!dir.exists()) {
            System.out.println("Directory does not exist.");
            return;
        }

        if (!dir.isDirectory()) {
            System.out.println("Given name is not a directory.");
            return;
        }

        File[] files = dir.listFiles();

        System.out.println("\nFiles in directory:");

        if (files != null) {
            for (File file : files) {
                if (file.isFile()) {
                    System.out.println(
                        file.getName() + " - " + file.length() + " bytes"
                    );
                }
            }
        }
    }
}