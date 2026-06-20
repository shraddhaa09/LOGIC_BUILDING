class Logic{
    void countFactors(int num){
        int count=0;
        System.out.println("Factors of "+num+" are:");
        for(int i=1;i<=num;i++){
            if(num%i==0){
                count++;
            }
        }
        System.out.println("Total factors: "+count);
    }
}
class program3{
    public static void main(String[]args){
        Logic obj=new Logic();
        obj.countFactors(20);
    }
}   
