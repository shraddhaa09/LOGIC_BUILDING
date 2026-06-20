class Logic{
    void findSmallestDigit(int num){
        int smallest=9;
        while(num>0){
            int digit=num%10;
            if(digit<smallest){
                smallest=digit;
            }
            num=num/10;
        }
        System.out.println("Smallest digit is: "+smallest);
    }
}
class program5{
    public void main(String[]args){
        Logic obj=new Logic();
        obj.findSmallestDigit(45872);
    }
}