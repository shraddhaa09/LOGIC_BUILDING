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

class program852 {
    public static void main(String A[]) throws Exception {

        LocalDate lobj = LocalDate.now();

        // INSERT INTO StudyLog VALUES (...)
        StudyLog s1 = new StudyLog(lobj, "C Programming", 4.5, "Pointers in C");
        StudyLog s2 = new StudyLog(lobj, "C++ Programming", 4.5, "Pointers in C++");
        StudyLog s3 = new StudyLog(lobj, "Java Programming", 4.5, "Pointers in Java");
        StudyLog s4 = new StudyLog(lobj, "Python Programming", 4.5, "Pointers in Python");

        // In-memory database
        ArrayList<StudyLog> Database = new ArrayList<StudyLog>();

        String Filename = "MarvellousStudLog.csv";

        FileWriter fwobj = new FileWriter(Filename);

        // INSERT INTO StudyLog
        Database.add(s1);
        Database.add(s2);
        Database.add(s3);
        Database.add(s4);

        // CSV column names
        fwobj.write("Date,Subject,Duration,Description\n");

        // SELECT * FROM StudyLog
        for (StudyLog s : Database) {
            fwobj.write(
                s.getDate() + "," +
                s.getSubject() + "," +
                s.getDuration() + "," +
                s.getDescription() + "\n"
            );
        }

        fwobj.close();

        // DELETE FROM StudyLog
        Database.clear();

        // Remove reference
        Database = null;

        System.gc();
    }
}