import java.util.Scanner;

public class taking_input_from_user{
public static void main(String[] args){
    Scanner scanner = new Scanner(System.in);
    System.out.println("enter your roll no ");
    int roll_no = scanner.nextInt();
    System.out.println("enter your name ");
    String name = scanner.next();
    System.out.println("your roll no and name is "+roll_no +" and " + name +" respectively ");
    scanner.close();
   }
}