import java.net.Socket;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Scanner;

public class client1 {

    public static void main(String[] args) {

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