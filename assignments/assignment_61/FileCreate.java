import java.io.*;
import java.util.*;

public class FileCreate {

    public static void main(String A[]) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String fileName = scanner.nextLine();

        File file = new File(fileName);

        System.out.println("File name: " + file.getName());
        System.out.println("Absolute path: " + file.getAbsolutePath());

        try {

            if (file.exists()) {

                System.out.println(fileName + " already exists");
            }
            else {

                boolean created = file.createNewFile();

                if (created) {
                    System.out.println(fileName + " created successfully");
                }
                else {
                    System.out.println("File creation failed");
                }
            }

        }
        catch (IOException e) {

            System.out.println("Error: " + e);
        }

        scanner.close();
    }
}
