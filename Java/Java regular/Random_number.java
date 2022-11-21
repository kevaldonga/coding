import java.util.Random;

public class Random_number{
    public static void main(String[] args) {
        Random random = new Random();
        int n = random.nextInt(100)+1;
        System.out.println("your random number is "+n);
    }
}