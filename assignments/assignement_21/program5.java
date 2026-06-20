class Logic{
    void printDivisibleBy2and3(int num){
        System.out.println("Numbers divisible by 2 and 3 from 1 to "+num+" are:");
        for(int i=1;i<=num;i++){
            if(i%2==0 && i%3==0){
                System.out.print(i+" ");
            }
        }
    }
}
class program5{
    public static void main(String args[]){
        Logic obj=new Logic();
        obj.printDivisibleBy2and3(30);
    }
}