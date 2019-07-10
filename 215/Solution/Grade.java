class Grade{
    private double grade;
    private Student student;
    private boolean isGradePosted = false;

    public Grade() {
    }

    public Grade(double grade, Student student) {
        this.grade = grade;
        this.student = student;
    }

    public double getGrade() {
        return this.grade;
    }

    public void setGrade(double grade) {
        this.isGradePosted = true;
        this.grade = grade;
    }

    public Student getStudent() {
        return this.student;
    }

    public void setStudent(Student student) {
        this.student = student;
    }

    public boolean getIsGradePosted(){
        return this.isGradePosted;
    }

    public void setIsGradePosted(boolean isGradePosted) {
        this.isGradePosted = isGradePosted;
    }

    

    @Override
    public String toString() {
        return 
                "name: " + getStudent().getName() + 
                "\nId: " + getStudent().getId() + 
                "\ngrade: " + getGrade();
    }




}