import java.net.*;
import java.util.*;
import java.io.*;

public class ClientHandler1 implements Runnable {

    private Socket socket;

    public ClientHandler1(Socket socket) {
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

                command = command.trim();

                // QUIT command
                if (command.equalsIgnoreCase("QUIT")) {
                    out.println("GOOD BYE!");
                    break;
                }

                // Split operation and string
                String parts[] = command.split("\\s+", 2);//The 2 means split into at most two parts.(to avoid 3 strings in such condition REVERSE Hello World )

                // Command must contain operation and string
                if (parts.length != 2) {
                    out.println("Invalid command. Use: OPERATION STRING");
                    continue;
                }

                String operation = parts[0].toUpperCase();
                String str = parts[1];

                switch (operation) {

                    case "LENGTH":
                        out.println("Length is : " + str.length());
                        break;

                    case "UPPER":
                        out.println(str.toUpperCase());
                        break;

                    case "LOWER":
                        out.println(str.toLowerCase());
                        break;

                    case "REVERSE":
                        out.println(reverse(str));
                        break;

                    case "PALINDROME":
                        out.println(isPalindrome(str));
                        break;

                    case "VOWELS":
                        out.println("Number of vowels\n:" + countVowels(str));
                        break;

                    default:
                        out.println("Invalid operation.");
                }
            }

            socket.close();

            System.out.println("Client disconnected.");

        }
        catch (Exception e) {

            System.out.println("Client Error: " + e);
        }
    }


    // REVERSE
    public static String reverse(String str) {

        String reverse = "";

        for (int i = str.length() - 1; i >= 0; i--) {

            reverse = reverse + str.charAt(i);
        }

        return reverse;
    }


    // PALINDROME
    public static String isPalindrome(String str) {

        String reverse = "";

        for (int i = str.length() - 1; i >= 0; i--) {

            reverse = reverse + str.charAt(i);
        }

        if (str.equalsIgnoreCase(reverse)) {
            return str + " is a Palindrome";
        }
        else {
            return str + " is not a Palindrome";
        }
    }


    // VOWELS
    public static int countVowels(String str) {

        int count = 0;

        for (int i = 0; i < str.length(); i++) {

            char ch = Character.toLowerCase(str.charAt(i));

            if (ch == 'a' ||
                ch == 'e' ||
                ch == 'i' ||
                ch == 'o' ||
                ch == 'u') {

                count++;
            }
        }

        return count;
    }
}
