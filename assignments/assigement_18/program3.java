class Logic{
    void printOddNumbers(int n){
        System.out.println("Odd numbers from 1 to "+n+" are:");
        for(int i=1;i<=n;i++){
            if(i%2!=0){
                System.out.print(i+" ");
            }
        }
    }
}
public class program3 {
    public static void main(String args[]){
        Logic obj=new Logic();
        obj.printOddNumbers(20);
    }
}
