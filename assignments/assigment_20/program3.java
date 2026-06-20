



/*
1.approach: using for loop
class Logic{
    void checkPerfect(int num){
        int sum=0;
        for(int i=1;i<num;i++){
            if(num%i==0){
                sum+=i;
            }
        }
        if(sum==num){
            System.out.println(num+" is a perfect number");
        }
        else{
            System.out.println(num+" is not a perfect number");
        }
    }
}
*/


//2.approach:mathamatically EUCLID's theorem
//   int perfect = (int)(Math.pow(2, p - 1) * (Math.pow(2, p) - 1));

class program3{
    public static void main(String[]args){
        Logic obj=new Logic();
        obj.checkPerfect(6);
    }
}