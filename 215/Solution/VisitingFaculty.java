class VisitingFaculty extends Teacher{
    private final double salary = 8000;


    public VisitingFaculty() {
    
    }

    public VisitingFaculty(String name, int age, String address) {
        super(name, age, address);
    }

    @Override
    public double getSalary() {
        return this.salary + ((this.salary / 100) * 20) * super.getNumberOfCourses();
    }

    @Override
    public String toString() {
        return super.toString();
    }
    
}