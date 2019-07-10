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
            newCourse.addStudent(this);
            courses[numberOfCourses++] = newCourse;
        }
        else if(cgpa < 2.5 && numberOfCourses >= 4){
            System.out.println("You are not allowed to take more than 4 courses");
        }
        else if(cgpa > 2.5 && numberOfCourses < 6){
            newCourse.addStudent(this);
            courses[numberOfCourses++] = newCourse;
        }else{
            System.out.println("You are not allowed to take more than 6 courses");
        }
    }

    public void getGrades(){
        for(int i = 0; i < numberOfCourses; i++){
        if(courses[i].getGrade(this.id).getIsGradePosted()){
            System.out.print("Grade for " + courses[i].getName() +": ");
            System.out.println(courses[i].getGrade(this.id).getGrade());
        }    
        else
            System.out.println("graders not posted yet for " + courses[i].getName());
        }
    }

    public void printCgpa(){
        double cgpa = 0.0;
        boolean allPosted = true;
        for(int i = 0; i < numberOfCourses; i++){
            if(!courses[i].getGrade(this.id).getIsGradePosted()){
                allPosted = false;
                break;
            }
                
            else
                cgpa += courses[i].getGrade(this.id).getGrade();
            
        }

        if(allPosted){
            cgpa /= numberOfCourses;
            this.cgpa += cgpa;
            this.cgpa /= 2;
        }else{
            System.out.println("not all grades are posted for this semester, so cant show the updated cgpa");
        }

        System.out.println("your cgpa is: " + this.cgpa);
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