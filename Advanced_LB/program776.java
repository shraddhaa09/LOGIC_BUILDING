import java.util.*;

class program776
{
    public static void main(String A[])
    {
        Scanner sobj=new Scanner(System.in);

        HashMap<Character,Integer>hobj=new HashMap<Character,Integer>();

        System.out.println("Enter string: ");
        String str=sobj.nextLine();

        char Arr[]=str.toCharArray();
        int iCount=0;

        //in keyword this is for only but this is for each loop at time of  exceution 
        //in php we write for each as keyword 
        for(char ch:Arr)
        {
            if(hobj.containsKey(ch)){
                iCount=hobj.get(ch);
                hobj.put(ch,iCount+1);
            }
            else{
                 hobj.put(ch,1);
            }
        }
        char Brr[]=new char[hobj.size()];

        int i=0;
        //append
        for(char cValue:hobj.keySet()){
            Brr[i]=cValue;
            i++;
        }
        System.out.println(new String(Brr));
    }
}