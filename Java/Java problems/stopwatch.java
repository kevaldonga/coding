public class stopwatch {
    static int seconds = 0;
    public static void main(String[] args){
        Thread thread =new Thread(new Runnable() {
            public void run(){
                while(true){
                try{
                    seconds++;
                    Thread.sleep(1000);
                    System.out.println(seconds/3600 + " : " + (seconds%3600)/60 + " : " + seconds % 60);
                }
                catch(InterruptedException e){}
            }
            }
        });
                    thread.start();
    }
}
