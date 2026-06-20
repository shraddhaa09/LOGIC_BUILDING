class Logic{
    void findLargestDigit(int num){
        int largest=-1;
        int Digit=0;
        while(num>0){
            Digit=num%10;
            if(Digit>Largest){
                largest=Digit;
            }
            num=num/10;
        }
        System.out.println("Largest digit is: " + largest);
    }
}

class program{
    public static void main(String[] args){
        Logic obj=new Logic();
        obj.findLargestDigit(83429);
    }
}