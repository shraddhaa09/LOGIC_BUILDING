class Logic{
    void printDigits(int num){
        int digit=0;
        while(num>0){
            digit=num%10;
            System.out.println(digit);
            num=num/10;
        }
    }
}
public class program4 {
    public static void main(string[]args){
        Logic obj=new Logic();
        obj.printDigits(9876);
    }
}