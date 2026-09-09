import java.net.*;
import java.util.*;
import java.io.*;

public class server2 {

    public static void main(String A[]) {

        try {

            ServerSocket serversocket = new ServerSocket(5000);

            System.out.println("Server Started");
            System.out.println("Waiting for client");

            while (true) {

                Socket socket = serversocket.accept();

                System.out.println("Client connected!");

                ClientHandler2 clientHandler =
                        new ClientHandler2(socket);

                Thread thread =
                        new Thread(clientHandler);

                thread.start();
            }

        } catch (Exception e) {

            System.out.println("Error : " + e);
        }
    }
}