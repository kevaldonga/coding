import java.util.Scanner;

public class starPattern1 {
    public static void main(String[] args) {
        System.out.println("enter your value ");
        Scanner getdata = new Scanner(System.in);
        int n = getdata.nextInt();
        getdata.close();
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print("*");
            }
            System.out.println("");
        }
    }
}
