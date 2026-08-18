import java.io.*;
import java.util.*;
import java.util.zip.CRC32;

class program4{
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String filename = sc.nextLine();

        FileInputStream fin = new FileInputStream(filename);

        CRC32 crc = new CRC32();

        int ch;

        while ((ch = fin.read()) != -1) {
            crc.update(ch);
        }

        fin.close();

        System.out.println("Checksum: " + crc.getValue());
    }
}