//Duplicate transcation id detector

import java.util.*;

class program958{
    public static void main(String A[]){
        String transcation[]={"TX101","TX102","TX103","TX101","TX104","TX102"};

        HashSet<String>unique=new HashSet<String>();
        HashSet<String>Duplicate=new HashSet<String>();

        for(String str:transcation){
            if(!unique.add(str)){
                Duplicate.add(str);
            }
        }
        System.out.println("Unique : "+unique);
        System.out.println("Duplicate : "+Duplicate);
}
}