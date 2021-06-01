import java.util.*;

//Write a program to sort the given array.

public class Basic5 {
    public static void main(String[] args) {
        int n;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = input.nextInt();
        }

        for (int i = 1; i < n; i++) {
            if (arr[i - 1] > arr[i]) {
                int temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
            }
        }
        for (int i = 0; i < n; i++) {
            System.out.print(" " + arr[i]);
        }
        input.close();
    }
}
