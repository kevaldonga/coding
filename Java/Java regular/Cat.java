import java.util.Scanner;

public class Cat extends mammals {
    boolean tail, vegan;
    private String food;

    Cat() {
        Scanner scanner = new Scanner(System.in);
        eyes = 2;
        legs = 4;
        tail = true;
        System.out.println("Please bare with us while we ask you some questions about your pet ");
        System.out.println("What is your pet name ");
        name = scanner.next();
        System.out.println("According to you What is your pet IQ ");
        IQ = scanner.nextDouble();
        vegan = isvegan();
        food = food();
        System.out.println("You can also change the Details of your Pet ");
        fulloperation();
        scanner.close();
    }

    public void print() {
        System.out.printf("1.Name \n", name, "2.Eyes \n", eyes, "3.Legs \n", legs, "4.Food \n", food, "5.IQ \n", IQ);
    }

    public static void main(String[] args) {
        Cat cupcake = new Cat();
        cupcake.print();
    }
}
