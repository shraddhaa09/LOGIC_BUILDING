class Logic
{
    void checkpalindrome(int num)
    {
        int original = num;
        int reverse = 0;
        int iDigit = 0;

        while(num != 0)
        {
            iDigit = num % 10;
            reverse = reverse * 10 + iDigit;
            num = num / 10;
        }

        if(original == reverse)
        {
            System.out.println("Palindrome Number");
        }
        else
        {
            System.out.println("Not a Palindrome Number");
        }
    }
}

class Program2
{
    public static void main(String[] args)
    {
        Logic obj = new Logic();
        obj.checkpalindrome(121);
    }
}