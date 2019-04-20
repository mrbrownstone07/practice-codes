public class Plant{
    private String name;
    private int age;
    private String address;

    Plant(){
        this.name = "";
        this.age = 0;
        this.address = "";
    }

    Plant(String name, int age, String address){
        this.name = name;
        this.age = age;
        this.address = address;
    }

    void setName(String name){ this.name = name; }
    void setAge(int age){ this.age = age; }
    void setAddress(String address){ this.address = address; }

    String getName(){ return this.name; }
    int getAge(){ return this.age; }
    String getAddress() { return this.address; }

    @Override
    public String toString() {
        return "Name: " + this.name 
                + "\nAge: " + this.age
                + "\nAddress: " + this.address;
    }
}