import java.net.ServerSocket;
import java.net.Socket;

public class server1{
    public static void main(String[]args){
    try{
        ServerSocket serverSocket=new ServerSocket(5000);

        System.out.println("Server Started");
        System.out.println("Waiting for client");

        while(true){
                Socket socket=serverSocket.accept();

                System.out.println("Client connected!");

                ClientHandler clientHandler=new ClientHandler(socket);

                Thread thread=new Thread(clientHandler);

                thread.start();
        }

    }
    catch(Exception e){
        System.out.println("Error : "+e);
    }
    }
}