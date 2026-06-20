class Logic{
    void findMin(int a,int b,int c){
        if(a<b && a<c){
            System.out.println("Min number is = "+a);
        }
        else if(b<c){
            System.out.println("Min number is = "+b);
        }
        else{
            System.out.println("Min number is = "+c);
        }
    }
}
public class program4 {
    public static void main(String args[]){
        Logic obj=new Logic();
        obj.findMin(3,7,2);
    }
}
