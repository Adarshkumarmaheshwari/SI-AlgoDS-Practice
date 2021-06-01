// Write a program to reverse the array.

import java.util.*;

public class Basic4 {
    public static void main(String[] args) {
        int n;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        int arr[] = new int[n];
        int[] b = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = input.nextInt();
        }
        for (int i = 0; i < n; i++) {
            b[n - 1 - i] = arr[i];
        }
        for (int i = 0; i < n; i++) {
            System.out.print(" " + b[i]);
        }
        input.close();
    }
}
