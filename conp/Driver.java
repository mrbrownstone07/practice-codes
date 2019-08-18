public class Driver{
    public static void main(String[] args) {
        final Pc pc = new Pc();

        Thread t1 = new Thread(new Runnable(){
            @Override
            public void run() {
                try{
                    pc.produce();
                    System.out.println("from 1\n");
                }catch(InterruptedException e){
                    e.printStackTrace();
                }              
            }
        });

        Thread t2 = new Thread(new Runnable(){
            @Override
            public void run() {
                try{
                    pc.consume();
                    System.out.println("from 2\n");
                }catch(InterruptedException e){
                    e.printStackTrace();
                }              
            }
        });

        Thread t3 = new Thread(new Runnable(){
            @Override
            public void run() {
                try{
                    pc.produce();
                    System.out.println("from 3\n");
                }catch(InterruptedException e){
                    e.printStackTrace();
                }              
            }
        });

        t1.start();
        t2.start();
        t3.start();

        try {
            t1.join(); 
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        try {
            t2.join(); 
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        try {
            t1.join(); 
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}