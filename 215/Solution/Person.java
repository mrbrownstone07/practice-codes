class Person{
    private String name;
    private int age;
    private String address;


    public Person() {
        this.name = null;
        this.age = 0;
        this.address = null;
    }

    public Person(String name, int age, String address) {
        this.name = name;
        this.age = age;
        this.address = address;
    }

    public String getName() {
        return this.name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return this.age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getAddress() {
        return this.address;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public void name(String name) {
        this.name = name;
    }

    public void age(int age) {
        this.age = age;
    }

    public void address(String address) {
        this.address = address;
    }

    @Override
    public String toString() {
        return  "name: " + getName() + "\n" +
                "age: " + getAge() + "\n" +
                "address: " + getAddress();
    }
    
    
}