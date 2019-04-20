public class ActionGame extends Game{
    private int sequel;
    private String mainCharacter;

    ActionGame(String name, String creator, double rating, int sequel, String mainCharacter){
        super(name, creator, rating);
        this.sequel = sequel;
        this.mainCharacter = mainCharacter;
    }

    public void setMainCharacter(String mainCharacter) {
        this.mainCharacter = mainCharacter;
    }

    public String getMainCharacter() {
        return mainCharacter;
    }

    @Override
    public void changeRating(double rating) {
        if(rating < 0) throw new ArithmeticException("Rating can not be negative");
        else super.setRating(rating);
    }

    @Override
    public String toString() {
        return super.toString()
                +"\nSequel: " + this.sequel
                +"\nMain character: " + this.mainCharacter;
    }
    
}