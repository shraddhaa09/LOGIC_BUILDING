class Logic{
    void productofDigits(int num){
        int product=1;
        int digit=0;
        while(num>0){
            digit=num%10;
            product=product*digit;
            num=num/10; 
        }
        System.out.println("Product of digits is: " + product);
    }
}
class program{
    public static void main(String args[]){
        Logic obj=new Logic();
        obj.productofDigits(234);
    }
}