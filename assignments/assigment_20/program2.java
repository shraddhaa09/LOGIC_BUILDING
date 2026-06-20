class Logic{
    void printReverse(int num){
        int i=0;
        for(i=num;i>0;i--){
            System.out.print(i+" ");
        }
    }
}
class program2{
    public static void main(String[] args){
        Logic obj=new Logic();
        obj.printReverse(10);
    }
}