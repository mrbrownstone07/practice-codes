abstract class Teacher extends Person{

    public Teacher() {
    }

    public Teacher(String name, int age, String address) {
        super(name, age, address);
    }

    public abstract double getSalary();
    public abstract void addCourse(Course newCourse);
    public abstract int getNumberOfCourses();
    public abstract void printCourses();

    @Override
    public String toString() {
        return super.toString() +
                "\nnumberOfCourses: " + getNumberOfCourses() + "" +
                "\nsalary: " + getSalary();
    }
    
}