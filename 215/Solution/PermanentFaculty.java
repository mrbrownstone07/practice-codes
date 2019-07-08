class PermanentFaculty extends Teacher{
    private final double salary = 10000;
    public PermanentFaculty() {
    }

    public PermanentFaculty(String name, int age, String address) {
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