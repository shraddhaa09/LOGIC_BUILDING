import java.net.*;
import java.util.*;
import java.io.*;

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

                command = command.trim();

                // QUIT command
                if (command.equalsIgnoreCase("QUIT")) {
                    out.println("GOOD BYE!");
                    break;
                }

                // Example: PRIME 11
                String parts[] = command.split("\\s+");

                // Command must contain operation and one number
                if (parts.length != 2) {
                    out.println("Invalid command. Use: OPERATION NUMBER");
                    continue;
                }

                String operation = parts[0].toUpperCase();

                int number;

                try {
                    number = Integer.parseInt(parts[1]);
                }
                catch (NumberFormatException e) {
                    out.println("Invalid number.");
                    continue;
                }

                switch (operation) {

                    case "EVEN":
                        out.println(isEven(number));
                        break;

                    case "ODD":
                        out.println(isOdd(number));
                        break;

                    case "PRIME":
                        out.println(isPrime(number));
                        break;

                    case "PERFECT":
                        out.println(isPerfect(number));
                        break;

                    case "FACTORIAL":
                        out.println("Factorial is : " + factorial(number));
                        break;

                    case "REVERSE":
                        out.println("Reverse is : " + reverse(number));
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


    // EVEN
    public static String isEven(int number) {

        if (number % 2 == 0) {
            return number + " is an Even Number";
        }
        else {
            return number + " is not an Even Number";
        }
    }


    // ODD
    public static String isOdd(int number) {

        if (number % 2 != 0) {
            return number + " is an Odd Number";
        }
        else {
            return number + " is not an Odd Number";
        }
    }


    // PRIME
    public static String isPrime(int number) {

        if (number <= 1) {
            return number + " is not a Prime Number";
        }

        for (int i = 2; i <= Math.sqrt(number); i++) {

            if (number % i == 0) {
                return number + " is not a Prime Number";
            }
        }

        return number + " is a Prime Number";
    }


    // PERFECT
    public static String isPerfect(int number) {

        if (number <= 1) {
            return number + " is not a Perfect Number";
        }

        int sum = 0;

        for (int i = 1; i <= number / 2; i++) {

            if (number % i == 0) {
                sum = sum + i;
            }
        }

        if (sum == number) {
            return number + " is a Perfect Number";
        }
        else {
            return number + " is not a Perfect Number";
        }
    }


    // FACTORIAL
    public static long factorial(int number) {

        long fact = 1;

        for (int i = 1; i <= number; i++) {
            fact = fact * i;
        }

        return fact;
    }


    // REVERSE
    public static int reverse(int number) {

        int reverse = 0;

        while (number != 0) {

            int digit = number % 10;

            reverse = reverse * 10 + digit;

            number = number / 10;
        }

        return reverse;
    }
}
