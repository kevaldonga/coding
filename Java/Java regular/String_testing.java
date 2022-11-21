import java.util.Scanner;

public class String_testing {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter the length of your array ");
        int r = scanner.nextInt();
        String[] names = new String[r];
        for (int i = 0; i < names.length; i++) {
            System.out.println("enter your value no "+ i +" in string ");
            names[i] = scanner.next();
        }
        System.out.println("\tindex     value ");
        for (int i = 0; i < names.length; i++) {
            System.out.println("\t  "+i+"       " + names[i]);
        }
        System.out.println("search element -- ");
        String missing = new String();
        missing = scanner.next();
        boolean check = false;
        for (int i = 0; i < names.length; i++) {
            if(names[i].equals(missing)){
                System.out.println("input has been found at index no. "+ i +"!!");
                check = true;
            }
        }
        if(check == false){
            System.out.println("can't find the inputted value in names !!!!!");
        }
        scanner.close();
    }
}
