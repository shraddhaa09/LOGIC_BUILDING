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
    //to store database
    public ArrayList<StudyLog> Database;

    public String FileName = "MarvellousStudyTracker.csv";

    public studyTracker(){
        Database=new ArrayList<StudyLog>();
    }

    public void InsertLog(){
        Scanner sobj=new Scanner(System.in);

        System.out.println("---------------------------------------------------");
        System.out.println("----Enter the Details of your study----");
        System.out.println("---------------------------------------------------");

        LocalDate lobj=LocalDate.now();

        System.out.println("We are entering the date as: "+lobj);

        System.out.println("Enter the Name of the Subject Like c/c++/java etc");
        String sub=sobj.nextLine();

        System.out.println("Enter the time period of your study: ");
        double dur=sobj.nextDouble();

        sobj.nextLine();
        
        System.out.println("Please provide Description of your Study: ");
        String desc=sobj.nextLine();

        StudyLog studyobj=new StudyLog(lobj,sub,dur,desc);

        Database.add(studyobj);

        System.out.println("Study Logs gets inserted Succesfully");

        System.out.println("---------------------------------------------------");

    }

    public void DisplayLog(){
        System.out.println("---------------------------------------------------");
        if(Database.isEmpty()){
            System.out.println("Nothing to Display - database is empty");
            System.out.println("---------------------------------------------------");

            return;
        }

        System.out.println("Log Report of Marvellous Study Tracker");
        System.out.println("---------------------------------------------------");

        for(StudyLog s: Database){
            System.out.println(s);
        }
        System.out.println("---------------------------------------------------");

    }

    public void Exporttocsv(){
        System.out.println("---------------------------------------------------");

        if(Database.isEmpty()){
            System.out.println("Nothing to Export - database is empty");
            System.out.println("---------------------------------------------------");

            return;
        }

        try (FileWriter fwobj = new FileWriter(FileName)){
            fwobj.write("Data,subject,Duration of study,Description of study\n");
            for(StudyLog s:Database){
                fwobj.write(s.getDate()+","+s.getSubject()+","+s.getDuration()+","+s.getDescription()+"\n");
            }
            System.out.println("Data gets exported to csv Succesfully");
            System.out.println("---------------------------------------------------");

        }
        catch(IOException iobj){
            System.out.println(iobj);
        }
        catch(Exception eobj){
            System.out.println(eobj);
        }

    }

    public void SummaryByDate(){
            System.out.println("---------------------------------------------------");
            System.out.println("Summary by Date from study Tracker");
            System.out.println("---------------------------------------------------");

            TreeMap <LocalDate,Double>tobj=new TreeMap<LocalDate,Double>();

            LocalDate lobj=null;

            double d=0.0;

            double old=0.0;

            for(StudyLog s:Database){
                lobj=s.getDate();
                d=s.getDuration();
                if(tobj.containsKey(lobj)){
                    old=tobj.get(lobj);
                    tobj.put(lobj,d+old);

                }
                else{
                    tobj.put(lobj,d);
                }
            }

        //Display the details as per the date
        for(LocalDate l:tobj.keySet()){
            System.out.println("Date : "+l+"Total Study Duration : "+tobj.get(l));
        }

        

    }

    public void SummaryBySubject(){

    }
}
class program867 {
    public static void main(String A[]) {

        int iChoice=0;

        studyTracker stobj=new studyTracker();
        Scanner sobj=new Scanner(System.in);

        System.out.println("---------------------------------------------------");
        System.out.println("-----Welcome to Marvellous Study Tracker----");
        System.out.println("---------------------------------------------------");

        //shell to interact with end user

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

            iChoice=sobj.nextInt();
            switch(iChoice){

                //Insert new log
                case 1:
                    stobj.InsertLog();
                    break;

                //View all study logs
                case 2:
                    stobj.DisplayLog();
                    break;

                //Export to csv
                case 3:
                    stobj.Exporttocsv();
                    break;

                //Summery by date
                case 4:
                    stobj.SummaryByDate();
                    break;

                //Summary by subject
                case 5:
                    stobj.SummaryBySubject();
                    break;

                //Sterminate the project
                case 6:
                    break;

                
                default:
                    System.out.println("Please enter valid option");
                    break;
            }
        }

        while(iChoice!=6);

        System.out.println("---------------------------------------------------");
        System.out.println("-----Thank tou for using Study Tracker----");
        System.out.println("---------------------------------------------------");

        
    }        //End of main

}      //end of class