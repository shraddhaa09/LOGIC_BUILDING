//Duplicate transcation id detector

import java.util.*;

class program962{
    public static void main(String A[]){
        String transcation[]={"TX101","TX102","TX103","TX101","TX104","TX102","TX101"};

        HashSet<String>unique=new HashSet<String>();
        HashSet<String>Duplicate=new HashSet<String>();

        boolean bRet=false;

        for(String str:transcation){
            bRet=unique.add(str);
            if(bRet==false){
                Duplicate.add(str);
            }
        }
        System.out.println("Duplicate transactions : ");
        for(String str:Duplicate){
            System.out.println(str);
        }
}
}