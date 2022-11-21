import java.util.Scanner;

public class Student_data_entry {
    private int roll_no;
    private double maths_marks,physics_marks,science_marks,total,percentage;
    private String name;
    Student_data_entry(int stu_roll_no,String stu_name){
        roll_no = stu_roll_no;
        name = stu_name;
        System.out.println("constructor is called ");
        Scanner myscanner = new Scanner(System.in);
        System.out.println("enter yours at maths , physics and science respectively ");
        maths_marks = myscanner.nextDouble();
        physics_marks = myscanner.nextDouble();
        science_marks = myscanner.nextDouble();
        myscanner.close();
    }
    public Student_data_entry change(int roll_no,String name,double maths_marks,double physics_marks,double science_marks){
        this.roll_no = roll_no;
        this.name = name;
        this.maths_marks = maths_marks;
        this.physics_marks = physics_marks;
        this.science_marks = science_marks;
        this.name = name; 
        return this;
    }
    private void calculation(){
        total = maths_marks + physics_marks + science_marks;
        percentage = total / 3 ;
    }
    public void show(){
        calculation();
        System.out.println("Roll no - "+ roll_no +"\nName "+name);
        System.out.println("your total score is "+total);
        System.out.printf("your final percentage is %.2f",percentage);
    }
}
