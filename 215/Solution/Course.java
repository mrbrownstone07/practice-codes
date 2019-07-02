class Course{
    private String name;
    private String courseCode;

    public Course() {
    }

    public Course(String name, String courseCode) {
        this.name = name;
        this.courseCode = courseCode;
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

    @Override
    public String toString() {
        return "name: " + getName() + "\n" +
                "course code: " + getCourseCode();
    }
}