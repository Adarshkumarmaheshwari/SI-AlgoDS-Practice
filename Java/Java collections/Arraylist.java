import java.util.*;

public class Arraylist {
    public static void main(String[] args) {
        ArrayList<Integer> aa = new ArrayList<>();
        for (int i = 0; i < 10; i++) {
            aa.add(i);
        }
        // Printing elements
        System.out.println(aa);

        // Remove element at index 3
        aa.remove(3);

        // Displaying the ArrayList
        // after deletion
        System.out.println(aa);

        // Printing elements one by one
        for (int i = 0; i < aa.size(); i++)
            System.out.print(aa.get(i) + " ");

    }
}