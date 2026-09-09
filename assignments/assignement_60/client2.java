import java.net.*;
import java.util.*;
import java.io.*;

// out → Client sends → Server
// in  ← Client receives ← Server

public class client2 {

    public static void main(String A[]) {

        try {

            Socket socket = new Socket("localhost", 5000);

            BufferedReader in = new BufferedReader(
                    new InputStreamReader(socket.getInputStream()));

            PrintWriter out = new PrintWriter(
                    socket.getOutputStream(), true);

            Scanner scanner = new Scanner(System.in);

            while (true) {

                System.out.print("Enter command: ");
                String command = scanner.nextLine();

                out.println(command);

                String response = in.readLine();

                System.out.println("Server: " + response);

                if (command.equalsIgnoreCase("QUIT")) {
                    break;
                }
            }

            socket.close();
            scanner.close();

        } catch (Exception e) {
            System.out.println("Error: " + e);
        }
    }
}