abstract class Teacher extends Person{
    private Course courses[] = new Course[10];
    private int numberOfCourses = 0;
   
    public Teacher() {
    }

    public Teacher(String name, int age, String address) {
        super(name, age, address);
    }

    public void addCourse(Course newCourse){
        if(numberOfCourses < 10)
            courses[numberOfCourses++] = newCourse;
        else System.out.println("Maximum NUmber of courses");
    }

    public int getNumberOfCourses() {
        return this.numberOfCourses;
    }

    public void setNumberOfCourses(int numberOfCourses) {
        this.numberOfCourses = numberOfCourses;
    }

    public abstract int getSalary();
    
    public void printCourses(){
        for(int i = 0; i < numberOfCourses; i++) 
            System.out.println(courses[i].toString());
    }

    @Override
    public String toString() {
        return super.toString() +
                "\nnumberOfCourses: " + getNumberOfCourses() + "" +
                "\nsalary: " + getSalary();
    }
    
}