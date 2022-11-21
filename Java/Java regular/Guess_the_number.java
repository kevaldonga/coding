import java.util.Random;
import java.util.Scanner;

public class Guess_the_number {
    public static void main(String[] args) {
        int j = 0, guess = 0, s = 0, i = 0;
        Random number = new Random();
        Scanner scanner = new Scanner(System.in);
        while (s != 2) {
            if (i == 0) {
                System.out.println("choose your options ---");
                System.out.println("1.play the game \n2.exit the game");
            } else {
                System.out.println("1.play again \n2.exit");
            }
            s = scanner.nextInt();
            switch (s) {
                case 1: {
                    int answer = number.nextInt(100) + 1;
                    System.out.println("what's your name ?");
                    String name = scanner.next();
                    System.out.println("hello " + name + " !!");
                    int a = 0;
                    while (a != 1) {
                        System.out.println("should we start ?");
                        System.out.println("1 . yes \n2 . no");
                        a = scanner.nextInt();
                        System.out.println(" -- guess between 0 to 100 -- ");
                    }
                    boolean finish = false;
                    do {
                        if (j == 10) {
                            System.out.println("ouch !! your 10 tries are run out !!!");
                            System.out.println("number was " + answer + " !!");
                            finish = true;
                            break;
                        }
                        if (guess > 100) {
                            System.out.println("your guess is out of scope !!");
                            System.out.println("please guess between 1 to 100 !!!");
                            j++;
                        }
                        System.out.println("enter your guess --");
                        guess = scanner.nextInt();
                        if (guess < answer) {
                            System.out.println("guess higher !");
                            j++;
                        } else if (guess > answer) {
                            System.out.println("guess lower !");
                            j++;
                        } else if (guess == answer) {
                            j++;
                            if (j == 10) {
                                System.out
                                        .println("congratulations !! you have guessed the right number on your last try ");
                            } else {
                                System.out.println(
                                        "congratulations !! you have guessed the right number in " + j + " tries !!!");
                                finish = true;
                            }
                        }
                    } while (finish != true);
                    scanner.close();
                }
                case 2:
                    System.exit(0);
                default:
                    System.out.println("that's invalid option !!");
            }
        }
    }

}
