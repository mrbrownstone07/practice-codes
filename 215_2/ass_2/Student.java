class Student{
    String Id;
    String name;
    final AdviseWindow a = new AdviseWindow();
    public Student() {
    }
    
    public Student(String Id, String name) {
        this.Id = Id;
        this.name = name;
    }

    public String getId() {
        return this.Id;
    }

    public void setId(String Id) {
        this.Id = Id;
    }

    public String getName() {
        return this.name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void startAdvising(){

        Thread t1 = new Thread(new Runnable(){
        
            @Override
            public void run() {
                try {
                    a.startAdvising(this);
                } catch (Exception e) {
                    e.printStackTrace();
                }   
            }
        });

        t1.start();
        
        try {
            t1.join();
        } catch (Exception e) {
            e.printStackTrace();
        }

    }

    public void stopAdvising(){
        Thread t1 = new Thread( new Runnable(){
        
            @Override
            public void run() {
                try {
                    a.finishAdvising();
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });

        t1.start();
       
        try {
            t1.join();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @Override
    public String toString() {
        return "{" +
            " Id='" + getId() + "'" +
            ", name='" + getName() + "'" +
            "}";
    }
    
}