import java.io.File;
import java.util.Scanner;

public class Driver{
    public static void main(String[] args) {
        int index = -1;
        Person persons[] = new Person[20];
        Scanner fileReader = null;
        try{
            File studentsFile = new File("students.txt");
            File facultiesFile = new File("faculties.txt");
    
            fileReader = new Scanner(studentsFile);

            while(fileReader.hasNextLine()){
                String name = fileReader.nextLine();
                int age = Integer.parseInt(fileReader.nextLine());
                String department = fileReader.nextLine();
                int creditsCompleted = Integer.parseInt(fileReader.nextLine());
                
                persons[++index] = new Student(name, age, department, creditsCompleted);
            }
            fileReader.close();

            fileReader = new Scanner(facultiesFile);
            while(fileReader.hasNextLine()){
                String name = fileReader.nextLine();
                int age = Integer.parseInt(fileReader.nextLine());
                String department = fileReader.nextLine();
                String designation = fileReader.nextLine();

                persons[++index] = new Faculty(name, age, department, designation);
            }
            
            fileReader.close();
        }catch(Exception e){
            e.printStackTrace();
        }finally{

            fileReader.close();
        }

        for(int i = 0; i <= index; i++){
            System.out.println(persons[i].toString() + "\n");
        }
    }
}