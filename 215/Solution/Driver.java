class Driver{
    public static void main(String[] args) {
            
        Course c1 = new Course("Programming Language 2", "215");
        Course c2 = new Course("Programming Language 1", "115");
        Course c3 = new Course("Data Structures and Algorithms", "225");
        Course c4 = new Course("Microprocessors", "331");
        Course c5 = new Course("Database Management", "311");
        Course c6 = new Course("Operating Systems", "323");
        Course c7 = new Course("DLD", "231");


        //Student one
        Student s1 = new Student("mahdi", 23, "mirpur, dhaka-1216", 3.1, "1712784642");
        s1.addCourse(c1);
        s1.addCourse(c2);
        s1.addCourse(c2);
        s1.addCourse(c2);
        s1.addCourse(c2);
        s1.addCourse(c7);
        s1.addCourse(c7);     
        
        System.out.println(s1.toString());
        s1.printCourses();

        System.out.println("\n");


        //Student two
        Student s2 = new Student("Shibli", 24, "Dhanmondi, Dhaka-1216", 2.4, "1712184642");
        s2.addCourse(c1);
        s2.addCourse(c2);
        s2.addCourse(c3);
        s2.addCourse(c4);

        System.out.println(s2.toString());
        s2.printCourses();

        System.out.println("\n");


        //permanent faculty
        PermanentFaculty p1 = new PermanentFaculty("R", 30, "Mirpur");

        p1.addCourse(c1);
        p1.addCourse(c2);
        p1.addCourse(c1);
        p1.addCourse(c2);
        p1.addCourse(c1);
        p1.addCourse(c2);
        p1.addCourse(c1);
        p1.addCourse(c2);
        p1.addCourse(c1);
        p1.addCourse(c2);

        System.out.println(p1.toString());
        p1.printCourses();

        System.out.println("\n");

        //Visiting Faculty
        VisitingFaculty v1 = new VisitingFaculty("V", 28, "RA");
        
        v1.addCourse(c4);
        v1.addCourse(c5);
        
        System.out.println(v1.toString());
        v1.printCourses();

        System.out.println("\n");
    }
}