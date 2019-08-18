class Driver{
    public static void main(String[] args) {
        Student s1 = new Student("0001", "asd");
        Student s2 = new Student("0002", "ase");
        Student s3 = new Student("0003", "ase");

        s1.startAdvising();
        s2.startAdvising();
        s3.startAdvising();
    }
}