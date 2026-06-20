package assignments.assigement_18;

public class program1 {
    public static void main(String args[]){
        Logic obj=new Logic();
        obj.chechPrime(11);
    }
}
class Logic{
    void chechPrime(int n){
        int i;
        boolean isPrime=true;
        for(i=2;i<n;i++){
            if(n%i==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime){
            System.out.println(n+" is a prime number");
        }
        else{
            System.out.println(n+" is not a prime number");
        }
    }
}