import java.io.*;
import java.util.*;
import java.time.LocalDate;
import java.time.LocalDateTime;

class StudyLog {
    public LocalDate Date;
    public String Subject;
    public double Duration;
    public String Description;

    public StudyLog(LocalDate a, String b, double c, String d) {
        this.Date = a;
        this.Subject = b;
        this.Duration = c;
        this.Description = d;
    }

    @Override
    public String toString() {
        return Date + " | " + Subject + " | " + Duration + " | " + Description;
    }

    public LocalDate getDate() {
        return this.Date;
    }

    public String getSubject() {
        return this.Subject;
    }

    public double getDuration() {
        return this.Duration;
    }

    public String getDescription() {
        return this.Description;
    }
}
class studyTracker{
    public ArrayList Database;

    public studyTracker(){
        Database=new ArrayList<StudyLog>();
    }
}
class program856 {
    public static void main(String A[]) {

        int iChoice=0;

        studyTracker stobj=new studyTracker();
        Scanner sobj=new Scanner(System.in);

        System.out.println("---------------------------------------------------");
        System.out.println("-----Welcome to Marvellous Study Tracker----");
        System.out.println("---------------------------------------------------");

        do{
            System.out.println("---------------------------------------------------");
            System.out.println("PLease select appropriate option :");
            System.out.println("---------------------------------------------------");

            System.out.println("1:Insert new study log");
            System.out.println("2:View all study log");
            System.out.println("3:Export study log to csv");
            System.out.println("4:Summary of study log to date");
            System.out.println("5:Summary of study log to subject");
            System.out.println("6:Exist the application");
            System.out.println("---------------------------------------------------");

            iChoice=sobj.nextline();

        }

        while(iChoice!=6);

        System.out.println("---------------------------------------------------");
        System.out.println("-----Thank tou for using Study Tracker----");
        System.out.println("---------------------------------------------------");
        
    }
}