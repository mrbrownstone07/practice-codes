class PermanentFaculty extends Teacher{
    private final double basicSalary = 5000;
    private final int MAXCOURSE = 7;
    private Course courses[] = new Course[7];
    private int numberOfCourses = 0;

    public PermanentFaculty() {
    }

    public PermanentFaculty(String name, int age, String address) {
        super(name, age, address);
    }

    @Override
    public double getSalary() {
        return ((this.basicSalary / 100) * 20) * (this.getNumberOfCourses()) + this.basicSalary;
    }

    @Override
    public String toString() {
        return super.toString();
    }

    @Override
    public void addCourse(Course newCourse) {
        if(this.numberOfCourses < MAXCOURSE){
            newCourse.setFaculty(this);
            courses[numberOfCourses++] = newCourse;
        }else{
            System.out.println("maximum number of courses reached");
        }
    }

    @Override
    public int getNumberOfCourses() {
        return this.numberOfCourses;
    }

    @Override
    public void printCourses() {
        for(int i = 0; i < this.MAXCOURSE; i++) System.out.println(courses[i].toString());
    }

}