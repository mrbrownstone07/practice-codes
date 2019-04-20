public class StrategyGame extends Game {
    private String description;

    StrategyGame(String name, String creator, double rating, String description) {
        super(name, creator, rating);
        this.description = description;
    }

    public String getDescription() {
        return description;
    }

    public void setDescription(String description) {
        this.description = description;
    }

    @Override
    public void changeRating(double rating) {
        if(rating < 0) throw new ArithmeticException("Rating can not be negative");
        else super.setRating(rating);
    }

    @Override
    public String toString() {
        return super.toString() 
                + "\nDescription: " + this.description;
    }
}