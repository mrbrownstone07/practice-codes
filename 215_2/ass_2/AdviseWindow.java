import java.util.LinkedList;

class AdviseWindow{
    private static LinkedList<Object> list = new LinkedList();
    private int capacity  = 2;

    public void startAdvising(Object s) throws InterruptedException{

        synchronized (this){
            while(list.size() == capacity) wait();

            System.out.println("Student: "+ s.toString() + " started advising" );
            list.add(s);

            notify();

            Thread.sleep(1000);
        }
    } 

    public void finishAdvising() throws InterruptedException{

        synchronized (this){
            while(list.size() == 0) wait();

            Object s = list.removeFirst();
            System.out.println("Student: "+ s.toString() + " finished Advising");
            
            notify();

            Thread.sleep(1000);
        }
    }


}