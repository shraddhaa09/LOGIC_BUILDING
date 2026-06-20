class Logic{
    void countEvenoddRange(int range){
        int even=0,odd=0;
        for(int i=1;i<=range;i++){
            if(i%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        System.out.println("Even numbers count: "+even);
        System.out.println("Odd numbers count: "+odd);
    }
}

class program3{
    public static void main(String[]args){
        Logic obj=new Logic();
        obj.countEvenoddRange(50);
    }
}