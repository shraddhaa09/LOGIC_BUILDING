class Logic{
    void calculatePower(int num,int power){
        int result=1;
        int i=0;
        for(i=1;i<=power;i++){
            result=result*num;
        }
        System.out.println(num+" raised to the power "+power+" is "+result);
    }
}
class program5{
    public static void main(String args[]){
        Logic obj=new Logic();
        obj.calculatePower(2,5);
    }
}