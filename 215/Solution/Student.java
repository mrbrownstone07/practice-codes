class Student extends Person{
    private double cgpa;
    private String id;
    private Course[] courses = new Course[6];
    private int numberOfCourses = 0;

    public Student() {
        
    }

    public Student(double cgpa, String id) {
        this.cgpa = cgpa;
        this.id = id; 
    }

    public Student(String name, int age, String address, double cgpa, String id) {
        super(name, age, address);
        this.cgpa = cgpa;
        this.id = id; 
    }

    public double getCgpa() {
        return this.cgpa;
    }

    public void setCgpa(double cgpa) {
        this.cgpa = cgpa;
    }

    public String getId() {
        return this.id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public Course[] getCourses() {
        return this.courses;
    }

    public void addCourse(Course newCourse){
        if(cgpa < 2.5 && numberOfCourses < 4){
            courses[numberOfCourses++] = newCourse;
        }
        else if(cgpa < 2.5 && numberOfCourses >= 4){
            System.out.println("You are not allowed to take more than 4 courses");
        }
        else if(cgpa > 2.5 && numberOfCourses < 6){
            courses[numberOfCourses++] = newCourse;
        }else{
            System.out.println("You are not allowed to take more than 6 courses");
        }
    }

    public void printCourses(){
        for(int i = 0; i < numberOfCourses; i++) 
            System.out.println(courses[i].toString());
    }
    @Override
    public String toString() {
        return super.toString() +
                "\ncgpa: " + getCgpa() + "\n" +
                "id: " + getId();
    }
}