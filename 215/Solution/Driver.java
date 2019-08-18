class Driver{
    public static void main(String[] args) {
            
        Course c1 = new Course("Programming Language 2", "215");
        Course c2 = new Course("Programming Language 1", "115");
        //Course c3 = new Course("Data Structures and Algorithms", "225");
        Course c4 = new Course("Microprocessors", "331");
        Course c5 = new Course("Database Management", "311");
        //Course c6 = new Course("Operating Systems", "323");
        //Course c7 = new Course("DLD", "231");


        // // // Student one
        // Student s1 = new Student("rahim", 23, "mirpur, dhaka-1216", 3.1, "16112839234");
        // s1.addCourse(c1);
        // s1.addCourse(c2);
        // s1.addCourse(c3);
        // s1.addCourse(c4);
        // s1.addCourse(c5);
        
        // s1.addCourse(c6);
        // s1.addCourse(c7);     
        
        // System.out.println(s1.toString());
        // s1.printCourses();

        // // System.out.println("\n");


        // // // Student two
        // Student s2 = new Student("Dimebag", 24, "Dhanmondi, Dhaka-1207", 2.4, "1712184642");
        // s2.addCourse(c1);
        // s2.addCourse(c2);
        // s2.addCourse(c3);
        // s2.addCourse(c4);
        // s2.addCourse(c5);

        // System.out.println(s2.toString());
        // s2.printCourses();

        // System.out.println("\n");


        // // //permanent faculty
        // PermanentFaculty p1 = new PermanentFaculty("R", 30, "Mirpur");

        // p1.addCourse(c1);
        // p1.addCourse(c2);
        // p1.addCourse(c1);
        // p1.addCourse(c2);
        // p1.addCourse(c1);
        // p1.addCourse(c2);
        // p1.addCourse(c1);
        // p1.addCourse(c2);
        // p1.addCourse(c1);
        // // p1.addCourse_(c2);
        // // p1.addCourse_(c2);

        // System.out.println(p1.toString());
        // p1.printCourses();

        // System.out.println("\n");

        // // //Visiting Faculty
        // VisitingFaculty v1 = new VisitingFaculty("V", 28, "RA");
        
        // v1.addCourse(c4);
        // v1.addCourse(c5);
        // v1.addCourse(c1);
        // v1.addCourse(c1);
        // v1.addCourse(c1);
        // v1.addCourse(c1);
        
        // System.out.println(v1.toString());
        // v1.printCourses();

        // System.out.println("\n");

        PermanentFaculty pf = new PermanentFaculty("Prosonjit kumar", 32, "dhaka");
        pf.addCourse(c1);
        
        PermanentFaculty ps = new PermanentFaculty("Jibon shaha", 29, "Dhaka");
        ps.addCourse(c2);

        Student s1 = new Student("Rahim", 20, "dhaka", 2.8, "1712784642");
        Student s2 = new Student("Rafiq", 24, "dhaka", 3.4, "1712784643");
        Student s3 = new Student("hahim", 27, "dhaka", 3.8, "1712784644");
        Student s4 = new Student("lahim", 21, "dhaka", 2.6, "1712784645");

        s1.addCourse(c1);
        s2.addCourse(c1);
        s3.addCourse(c1);

        s1.addCourse(c2);
        s4.addCourse(c2);

        System.out.println("Course name: " + c1.getName());
        System.out.println(c1.getFaculty().getName());
        System.out.println("grades: ");
        c1.printGrades();
        
        System.out.println("");

        System.out.println("Course name: " + c2.getName());
        System.out.println(c2.getFaculty().getName());
        System.out.println("grades: ");
        c2.printGrades();

        c1.submitGrade(3.45, "1712784642");
        c1.submitGrade(3.55, "1712784643");
        c1.submitGrade(2.45, "1712784644");
        c1.submitGrade(3.45, "1712784645");

        System.out.println("");

        System.out.println("Course name: " + c1.getName());
        System.out.println(c1.getFaculty().getName());
        c1.printGrades();
        
        System.out.println();

        c2.submitGrade(3.45, "1712784645");
        c2.submitGrade(3.45, "1712784642");

       

        System.out.println("Course name: " + c1.getName());
        System.out.println(c2.getFaculty().getName());
        c2.printGrades();

        
        s1.addCourse(c4);
        s1.addCourse(c5);
        
        s1.getGrades();


        
        s1.printCgpa();

        System.out.println(c1.getNumberOfStudents());
        

        
    }
}