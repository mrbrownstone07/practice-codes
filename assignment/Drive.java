public class Drive{
    private static int index = -1;

    static void add(Plant[] plants, Plant p) { plants[++index] = p; }
    static void remove(Plant[] plants, String n) {
        int targetIndex = -1;
        for(int i = 0; i <= index; i++)
            if(plants[i].getName().equalsIgnoreCase(n)) targetIndex = i;
        
        if(targetIndex >= 0){
            if(targetIndex != index){
                for(int i = targetIndex; i < index; i++)
                    plants[i] = plants[i+1];
            }
            index--;
        }
        else System.out.println("Plant named " + n + " not found in the list");
    }
    static Plant search(Plant[] plants, String n) {
        for(int i = 0; i <= index; i++) 
            if(plants[i].getName().equalsIgnoreCase(n)) 
                return plants[i];
        return null;
    }
    static void display(Plant[] plants) {
        for(int i = 0; i <= index; i++)
            System.out.println(plants[i].toString() + "\n");
    }

    public static void main(String[] args) {
        Plant plants[] = new Plant[10];

        add(plants, new Herb("mint", 1, "Mirpur", 3.3, 5));
        add(plants, new Herb("m", 4, "Dhanmondi", 3.4, 6));
        add(plants, new Flower("Kodom", 3, "ECB", "SBE", "Faculty"));
        add(plants, new Herb("a", 7, "Dhaka", 3.2, 4));
        add(plants, new Flower("S", 2, "Banani", "ECE", "Student"));
        add(plants, new Flower("R", 8, "Kalshi", "Uttara", "Faculty"));
        display(plants);

        remove(plants, "mint");
        System.out.println("***After removing mint***\n");
        display(plants);

        remove(plants, "R");
        System.out.println("***After removing R***\n");
        display(plants);

	    remove(plants, "G");

        Plant res = search(plants, "Rose");
        System.out.println("***Search result of Rose***\n" + (res == null ? "not found" : res.toString()) + "\n");

        Plant r = search(plants, "m");
        System.out.println("***Search result of m***\n" + (r == null ? "not found" : r.toString()) + "\n");

	    Plant e = search(plants, "s");
        System.out.println("***Search result of S***\n" + (e == null ? "not found" : e.toString()) + "\n");
    }
}