public class thread_implementation {
    public static void main(String[] args) {
        Thread thread1 = new Thread(new Runnable() {
            public void run(){
                for(int i = 0; i < 5; i++){
                    System.out.println("keval donga");
                }
            }
        });
        Thread thread2 = new Thread(new Runnable() {

            public void run() {
                for(int i = 0; i < 5; i++){
                    System.out.println("darshan dhaduk");
                }
            }

        });
        Thread thread3 = new Thread(new Runnable() {
            public void run() {
                for(int i = 0; i < 5; i++){
                    System.out.println("navdip chothani");
                }
            }

        });
        thread1.start();
        for(int i = 0; i < 5; i++){
            System.out.println("sanket beladiya");
        }
        thread2.start();
        thread3.start();
    }
}
