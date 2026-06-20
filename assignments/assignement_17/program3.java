class Logic{
    void findMax(int a,int b){
        if(a>b){
            System.out.println("Max number is = "+a);
        }
        else{
            System.out.println("Max number is = "+b);
        }
    }
}
public class program3 {

    public static void main(String args[]){
        Logic obj=new Logic();
        obj.findMax(20, 15);
    }
}
