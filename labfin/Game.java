public abstract class Game{
    private String name;
    private String creator;
    private double rating;

    Game(String name, String creator, double rating){
        this.name = name;
        this.creator = creator;
        this.rating = rating;
    }
    
    public void setRating(double rating) {
        this.rating = rating;
    }

    public double getRating() {
        return rating;
    }

    abstract public void changeRating(double rating);

    @Override
    public String toString() {
        return "name: "+this.name
                +"\nCreator: "+this.creator
                +"\nRating: "+this.rating;
    }
}