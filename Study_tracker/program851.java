import java.util.*;
import java.time.LocalDate;
import java.time.LocalDateTime;

//next exercise use the sql functions make it feel like we are witing it s sql queries

class StudyLog{
    private LocalDate Date;
    private String Subject;
    private double Duration;
    private String Description;

    public StudyLog(LocalDate a,String b, double c,String d){
        this.Date=a;
        this.Subject=b;
        this.Duration=c;
        this.Description=d;
    }

    @Override
    public String toString(){
        return Date + " | " + Subject + " | " + Duration + " | " + Description ;
    }

    public LocalDate getDate(){
        return this.Date;
    }

    public LocalDate getSubject(){
        return this.Subject;
    }

    public LocalDate getDuration(){
        return this.Duration;
    }

    public LocalDate getDescription(){
        return this.Description;
    }

}

class program851{
    public static void main(String A[]){

        LocalDate lobj=LocalDate.now();

        StudyLog s1=new StudyLog(lobj,"C Progamming",4.5,"Pointers in C");
        StudyLog s2=new StudyLog(lobj,"C++ Progamming",4.5,"Pointers in C");
        StudyLog s3=new StudyLog(lobj,"Java Progamming",4.5,"Pointers in C");
        StudyLog s4=new StudyLog(lobj,"Python Progamming",4.5,"Pointers in C");

        ArrayList <StudyLog> Database=new ArrayList<StudyLog>();

        Database.add(s1);
        Database.add(s2);
        Database.add(s3);
        Database.add(s4);

        System.gc();

        
    }
}