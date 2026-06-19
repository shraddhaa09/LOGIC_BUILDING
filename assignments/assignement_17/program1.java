class Logic
{
    void sumofDigits(int num){
        int iDigit=0;
        int iSum=0;
        while(num!=0){
            iDigit=num%10;
            iSum=iSum+iDigit;
            num=num/10;
        }
        System.out.println("sum of digit = "+iSum);
    }
}
class program1
{
    public static void main(String[] args) {
        Logic obj = new Logic();
        obj.sumofDigits(123);
    }
}