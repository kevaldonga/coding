import java.util.Scanner;


public class calculator {
    public static void simple_calculator(){
        
        Scanner input = new Scanner(System.in);
        System.out.println("enter your first no ");
        double a = input.nextDouble();
        System.out.println("enter your second no ");
        double b = input.nextDouble();
        System.out.println("enter you operation ----");
        System.out.println("1. addition ");
        System.out.println("2. substraction ");
        System.out.println("3. division ");
        System.out.println("4. multiplication ");
        int op = input.nextInt();
        input.close();
        switch(op){
            case 1 : 
            System.out.println("the addition of two numbers is "+(a+b));
            break;
            case 2 : 
            System.out.println("the substraction of two numbers is " + (a-b));
            break;
            case 3 : 
            System.out.println("the division of two numbers is " + (a/b));
            break;
            case 4 : 
            System.out.println("the multiplication of two numbers is " + (a*b));
            break;
            default :
            System.out.println("invalid input !!!!!!!");
        }
    }
    public static void main(String[] args){
        simple_calculator();
    }
}
