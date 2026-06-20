class Logic{
    void sumEvenNumbers(int n){
        int sum=0;
        int i=0;
        for(i=1;i<=n;i++){
            if(i%2==0){
                sum=sum+i;
            }
        }
        System.out.println("The sum of even numbers from 1 to "+n+" is "+sum);
    }
}
class program1{
    public static void main(String[]args){
        Logic obj=new Logic();
        obj.sumEvenNumbers(10);
    }
}