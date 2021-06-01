
//Given an number n. Find the number of occurrences of n in the array.
import java.util.Scanner;

public class Basic7 {
    public static void main(String[] args) {
        int count = 0;
        Scanner input = new Scanner(System.in);
        int k, n;
        k = input.nextInt();
        n = input.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = input.nextInt();
            if (arr[i] == k) {
                count++;
            }
        }
        System.out.println(count);
        input.close();
    }
}
