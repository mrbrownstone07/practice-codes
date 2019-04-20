public class Student extends Person {
    private String department;
    private int creditsCompleted;

    Student() {

    }
    
    Student(String department, int creditsCompleted) {
        this.department = department;
        this.creditsCompleted = creditsCompleted;
    }

    Student(String name, int age, String department, int creditsCompleted) {
        super(name, age);
        this.department = department;
        this.creditsCompleted = creditsCompleted;
    }

    @Override
    public String toString() {
        return super.toString() +
                "\nDepartment: " + this.department +
                "\nCredits Completed: " + this.creditsCompleted;
    }
}