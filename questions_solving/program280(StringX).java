package Marvellous;
public class StringX{
    public int CountCaptial(String str){
        int i=0;
        int count=0;
        for(i=0;i<str.length();i++)
        {
            if(str.charAt(i)>='A' && str.charAt(i)<='Z'){
            count++;
            }
        }
        return count;
    }

    public int CountSmall(String str){
        int i=0;
        int count=0;

        char Arr[]=str.toCharArray();
        for(i=0;i<Arr.length;i++)
        {
            if(Arr[i]>='a' && Arr[i]<='z'){
            count++;
            }
        }
        return count;
    }

    public int CountDigits(String str){
        int i=0;
        int count=0;

        char Arr[]=str.toCharArray();
        for(i=0;i<Arr.length;i++)
        {
            if(Arr[i]>='0' && Arr[i]<='9')
            {
            count++;
            }
        }
        return count;
    }

    public int CountSpace(String str){
        int i=0;
        int count=0;

        char Arr[]=str.toCharArray();
        for(i=0;i<Arr.length;i++)
        {
            if(Arr[i]==' ')
            {
            count++;
            }
        }
        return count;
    }

    public int CountSpecial(String str){
        int i=0;
        int count=0;

        char Arr[]=str.toCharArray();
        for(i=0;i<Arr.length;i++)
        {
            if((Arr[i]>='!' && Arr[i]<='/')||
                (Arr[i]>=':' && Arr[i]<='@')||
                (Arr[i]>='[' && Arr[i]<='`')||
                (Arr[i]>='{' && Arr[i]<='~'))
            {
            count++;
            }
        }
        return count;
    }

}