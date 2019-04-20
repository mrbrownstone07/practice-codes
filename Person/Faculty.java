public class Faculty extends Person {
    private String department;
    private String designation;

    Faculty(){

    }

    Faculty(String department, String designation){
        this.department = department;
        this.designation = designation;
    }

    Faculty(String name, int age, String department, String designation){
        super(name, age);
        this.department = department;
        this.designation = designation;
    }

    @Override
    public String toString() {
        return super.toString() + 
                "\nDepartment: " + this.department +
                "\nDesignation: " + this.designation;
    }

    
}