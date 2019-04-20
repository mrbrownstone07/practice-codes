public class Flower extends Plant{
    private String department;
    private String designation;

    Flower(){

    }

    Flower(String department, String designation){
        this.department = department;
        this.designation = designation;
    }

    Flower(String name, int age, String address, String department, String designation){
        super(name, age, address);
        this.department = department;
        this.designation = designation;
    }

    @Override
    void setName(String name) { super.setName(name); }
    @Override
    void setAddress(String address) { super.setAddress(address); }
    @Override
    void setAge(int age) { super.setAge(age);}
    public void setDepartment(String department) { this.department = department; }
    public void setDesignation(String designation) { this.designation = designation; }

    @Override
    String getName() { return super.getName(); }
    @Override
    String getAddress() { return super.getAddress(); }    
    @Override
    int getAge() { return super.getAge(); }
    public String getDepartment() { return department; }
    public String getDesignation() { return designation; }

    @Override
    public String toString() {
        return super.toString() 
                + "\nDepartment: " + this.department
                + "\nDesignation: " +this.designation;
    }
}