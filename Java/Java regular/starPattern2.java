import java.util.Scanner;

public class starPattern2 {
    public static void main(String[] args) {
        System.out.println("enter your value ");
        Scanner getdata = new Scanner(System.in);
        int n = getdata.nextInt();
        getdata.close();
        int j;
        for (int i = n; i >= 1; i--) {
            for (j = 0; j < i; j++) {
                    System.out.print("*");
            }
            System.out.println("");
        }
    }
}
