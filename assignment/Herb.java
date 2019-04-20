public class Herb extends Plant{
    private double hours;
    private double rate;

    Herb(){

    }

    Herb(double hours, double rate){
        this.hours = hours;
        this.rate = rate;
    }

    Herb(String name, int age, String address, double hours, double rate){
        super(name, age, address);
        this.hours = hours;
        this.rate = rate;
    }

    @Override
    void setName(String name) { super.setName(name); }
    @Override
    void setAddress(String address) { super.setAddress(address); }
    @Override
    void setAge(int age) { super.setAge(age);}
    public void setHours(double hours) { this.hours = hours; }
    public void setRate(double rate) { this.rate = rate; }

    @Override
    String getName() { return super.getName(); }
    @Override
    String getAddress() { return super.getAddress(); }    
    @Override
    int getAge() { return super.getAge(); }
    public double getHours() { return hours; }
    public double getRate() { return rate; }

    @Override
    public String toString() {
        return super.toString()
                + "\nHours: " + this.hours
                + "\nRate: " + this.rate;
    }

    double Salary(){ return this.rate * this.hours; }

}