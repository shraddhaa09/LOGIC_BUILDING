class Logic{
    void printTable(int num){
        int i=0;
        int mul=0;
        for(i=1;i<=10;i++){
            mul=num*i;
            System.out.println(num+" * "+i+" = "+mul);
        }
    }
}

public class program5 {
    public static void main(String args[]){
        Logic obj=new Logic();
        obj.printTable(5);
    }
}
