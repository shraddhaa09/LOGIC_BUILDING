import java.util.*;
import java.time.LocalDate;
import java.time.LocalDateTime;

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

class program846{
    public static void main(String A[]){

        LocalDate lobj=LocalDate.now();

        ArrayList <StudyLog> Database=new ArrayList<StudyLog>();

        StudyLog sobj1=new StudyLog(lobj,"C Progamming",3.5,"Pointers in C");
        StudyLog sobj2=new StudyLog(lobj,"C++ Progamming",3.5,"Pointers in C");
        StudyLog sobj3=new StudyLog(lobj,"Java Progamming",3.5,"Pointers in C");

        Database.add(sobj1);
        Database.add(sobj2);
        Database.add(sobj3);

        for(StudyLog sobj:Database){
            System.out.println(sobj);
        }
        
    }
}