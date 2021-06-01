import java.util.*;

public class Linkedlist {
    public static void main(String[] args) {
        LinkedList<Integer> li = new LinkedList<>();
        for (int i = 1; i <= 10; i++)
            li.add(i);

        // Printing elements
        System.out.println(li);

        // Remove element at index 3
        li.remove(3);

        // Displaying the List
        // after deletion
        System.out.println(li);

        // Printing elements one by one
        for (int i = 0; i < li.size(); i++)
            System.out.print(li.get(i) + " ");
    }
}
