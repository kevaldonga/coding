import java.util.Scanner;

public class mammals implements animal_interface {
    protected String name;
    protected int eyes, legs;
    protected double IQ;

    @Override
    public String food() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("What is "+name + " Eating ?");
        String eats = scanner.next();
        scanner.close();
        return eats;
    }

    @Override
    public boolean isvegan() {
        System.out.println("Is " + name + " a vegan ? - True(1) or False(0)");
        Scanner scanner = new Scanner(System.in);
        int ans = scanner.nextInt();
        scanner.close();
        boolean answer=false;
        if(ans==1){
            answer = true;
        }
        else if(ans==0){
            answer = false;
        }
        else{
            System.out.println("invalid option !!!");
        }
        return answer;
    }
    @Override
    public boolean hastail() {
        System.out.println("Does " + name + " have tail ? - True(1) or False(0)");
        Scanner scanner = new Scanner(System.in);
        int ans = scanner.nextInt();
        scanner.close();
        boolean answer=false;
        if(ans==1){
            answer = true;
        }
        else if(ans==0){
            answer = false;
        }
        else{
            System.out.println("invalid option !!!");
        }
        return answer;
    }
    
    public void fulloperation() {
        boolean shouldfinish = false;
        Scanner scanner = new Scanner(System.in);
        while (shouldfinish != true) {
            System.out.printf("enter your operations below \n\t1.Name \n\t2.Eyes \n\t3.Legs \n\t4.IQ \n\t5.Exit the code");
            int answer = scanner.nextInt();
            switch (answer) {
                case 1:
                System.out.println("The Name of Your pet is " + name);
                change(1);
                case 2:
                System.out.println("The number of eyes of Your pet " + name + " is " + eyes);
                change(2);
                case 3:
                System.out.println("The number of legs of Your pet " + name + " is " + legs);
                change(3);
                case 4:
                System.out.println("The IQ of Your pet " + name + " is " + IQ);
                change(4);
                case 5:
                System.exit(0);
                default:
                System.out.println("Invalid option has been chosen !!!");
                System.out.println("Please try again !!");
                break;
                
            }
        }
        scanner.close();
    }

    public void change(int whichone) {
        System.out.println("Do you want to change it ?");
        System.out.printf("\t1.Yes \n\t2.Cancel");
        Scanner scanner = new Scanner(System.in);
        int yesorno = scanner.nextInt();
        if (yesorno == 1) {
            switch (whichone) {
                case 1:
                    System.out.println("Enter new name for Your pet -" + name);
                    name = scanner.next();
                    System.out.println("You Have successfuly changed Your pet's name to " + name);
                    break;
                case 2:
                    System.out.println("Enter new numbers of eyes for Your pet -" + name);
                    name = scanner.next();
                    System.out.println("You Have successfuly changed Your pet's number of eyes to " + eyes);
                    break;
                case 3:
                    System.out.println("Enter new numbers of legs for Your pet -" + name);
                    name = scanner.next();
                    System.out.println("You Have successfuly changed Your pet's number of legs to " + legs);
                    break;
                case 4:
                    System.out.println("Enter new numbers of IQ for Your pet -" + name);
                    name = scanner.next();
                    System.out.println("You Have successfuly changed Your pet's IQ to " + IQ);
                    break;
                default:
                    System.out.println("Invalid option has been chosen !!!");
                    break;
            }
            scanner.close();
        }
    }
}
