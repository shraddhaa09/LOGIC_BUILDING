package assignments.assigement_18;

class Logic{
    void checkSign(int n){
        if(n>0){
            System.out.println(n+" is a positive number");
        }
        else if(n<0){
            System.out.println(n+" is a negative number");
        }
        else{
            System.out.println(n+" is zero");
        }
    }
}

public class program5 {
    public static void main(String args[]){
        Logic obj=new Logic();
        obj.checkSign(-8);
    }
}
