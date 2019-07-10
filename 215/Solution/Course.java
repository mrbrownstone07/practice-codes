class Course{
    private String name;
    private String courseCode;
    private Teacher faculty;
    private Grade[] grades = new Grade[35];
    //private boolean showGrades = false;
    private int numberOfStudents = 0;

    public Course() {
        for(int i = 0; i < 35; i++) grades[i] = new Grade();
    }

    public Course(String name, String courseCode) {
        this.name = name;
        this.courseCode = courseCode;
        for(int i = 0; i < 35; i++) grades[i] = new Grade();
    }

    public String getName() {
        return this.name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getCourseCode() {
        return this.courseCode;
    }

    public void setCourseCode(String courseCode) {
        this.courseCode = courseCode;
    }

    public Course name(String name) {
        this.name = name;
        return this;
    }

    public Course courseCode(String courseCode) {
        this.courseCode = courseCode;
        return this;
    }

    public void setFaculty(Teacher faculty){
        this.faculty = faculty;
    }

    public Teacher getFaculty() {
        return this.faculty;
    }

    public int getNumberOfStudents() {
        return numberOfStudents;
    }

    public void setNumberOfStudents(int numberOfStudents) {
        this.numberOfStudents = numberOfStudents;
    }

    public Grade getGrade(String id){
        for(int i = 0; i < numberOfStudents; i++){
            if(grades[i].getStudent().getId() == id)
                return grades[i];
        }
        return null;
    }

    public void submitGrade(double grade, String id){
        boolean found = false;
        for(int i = 0; i < this.numberOfStudents; i++){
            if(id == grades[i].getStudent().getId()){
                grades[i].setGrade(grade);
                found = true;
            }
        }
        if(!found) System.out.println("Student with id " + id + " not found");
    }


    public void addStudent(Student s){
        if(this.getNumberOfStudents() < 35){
            grades[this.numberOfStudents++].setStudent(s);
        }
    }

    public void printGrades(){
        for(int i = 0; i < numberOfStudents; i++)
            System.out.println(grades[i].toString());
    }

    @Override
    public String toString() {
        return "name: " + getName() + "\n" +
                "course code: " + getCourseCode();
    }
}