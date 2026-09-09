import java.net.*;
import java.util.*;
import java.io.*;
import java.text.*;

public class ClientHandler2 implements Runnable {

    private Socket socket;

    public ClientHandler2(Socket socket) {
        this.socket = socket;
    }

    @Override
    public void run() {

        try {

            BufferedReader in = new BufferedReader(
                    new InputStreamReader(socket.getInputStream()));

            PrintWriter out = new PrintWriter(
                    socket.getOutputStream(), true);

            while (true) {

                String command = in.readLine();

                if (command == null) {
                    break;
                }

                System.out.println("Received: " + command);

                command = command.trim().toUpperCase();

                switch (command) {

                    case "DATE":

                        SimpleDateFormat dateFormat =
                                new SimpleDateFormat("dd-MM-yyyy");

                        String date =
                                dateFormat.format(new Date());

                        out.println(date);

                        break;


                    case "TIME":

                        SimpleDateFormat timeFormat =
                                new SimpleDateFormat("HH:mm:ss");

                        String time =
                                timeFormat.format(new Date());

                        out.println(time);

                        break;


                    case "SERVERNAME":

                        String serverName =
                                InetAddress.getLocalHost().getHostName();

                        out.println(serverName);

                        break;


                    case "HELP":

                        out.println("Available Commands: DATE TIME SERVERNAME HELP QUIT");

                        break;


                    case "QUIT":

                        out.println("GOOD BYE!");

                        socket.close();

                        return;


                    default:

                        out.println("Invalid command. Type HELP for available commands.");
                }
            }

            socket.close();

            System.out.println("Client disconnected.");

        }
        catch (Exception e) {

            System.out.println("Client Error: " + e);
        }
    }
}
