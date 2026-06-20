class Logic{
    void printEvenNumbers(int n){
        System.out.println("Even numbers from 1 to "+n+" are:");
        for(int i=1;i<=n;i++){
            if(i%2==0){
                System.out.print(i+" ");
            }
        }
    }
}

public class program2 {
    public static void main(String args[]){
        Logic obj=new Logic();
        obj.printEvenNumbers(20);
    }
}
