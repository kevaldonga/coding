public class Student_table_returning_object {
    public static void main(String[] args) {
        Student_data_entry keval = new Student_data_entry(3051, "darshan dhaduk");
        keval.show();
        System.out.print("\nintializing change function ........\n\n");
        keval.change(3051, "keval donga", 84,75 ,80).show();
    }
}
