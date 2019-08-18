import java.util.LinkedList;
import java.util.function.Consumer;

class Pc{
    LinkedList<Integer> List = new LinkedList<>();
    int capacity = 2;

    public void produce() throws InterruptedException{
        int value = 0;
        //while(true){
            synchronized(this){

                while(List.size() == capacity) wait();

                System.out.println("producer produced: "+value);
                List.add(value++);

                notify();

                Thread.sleep(1000);
            }
        //}
    }

    public void consume() throws InterruptedException{
        //while (true){
            synchronized (this){
                while(List.size() == 0)
                    wait();

                int val = List.removeFirst();
                System.out.println("Consumer consumed: "+val);

                notify();

                Thread.sleep(1000);
            }
        //}
    }
}