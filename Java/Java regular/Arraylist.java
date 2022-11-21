import java.util.ArrayList;

class Arrylist {
    public static void main(String[] args) {
        ArrayList<String> names = new ArrayList<>(6);
        names.add("keval");
        names.add("Divyak");
        names.add("Pranav");
        names.add("Dharmik");
        names.add("darshan");
        // System.out.println(names.size());
        System.out.println(names.get(1));
        // System.out.println(names.remove(3));
        // System.out.println(names.size());
        // names.clear();
        Boolean isempty = names.isEmpty();
        if (isempty) {
            System.out.println("your ArrayList is empty");
        } else {
            System.out.println("your ArryList is filled up with '" + names.size() + "' elements ");
        }

    }
};