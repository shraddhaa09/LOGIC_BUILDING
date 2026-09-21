import java.util.*;
import java.time.LocalDate;
import java.time.LocalDateTime;

/*
class object{  
    public 
}

*/ 

class StudyLog{
    public LocalDate Date;
    public String Subject;
    public double Duration;
    public String Description;

    public StudyLog(LocalDate a,String b, double c,String d){
        this.Date=a;
        this.Subject=b;
        this.Duration=c;
        this.Description=d;
    }

    //override
    public String toString(){
        return Date + " | " + Subject + " | " + Duration + " | " + Description ;
    }

}

class program843{
    public static void main(String A[]){
        LocalDate lobj=LocalDate.now();

        StudyLog sobj1=new StudyLog(lobj,"C Programming",3.5,"Pointers in C");
        StudyLog sobj1=new StudyLog(lobj,"Java Programming",5.5,"Inheretince in Java");

        System.out.println(sobj1);//
        System.out.println(sobj2);

        
    }
}