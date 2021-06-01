import java.util.*;

// Find the Kth largest and Kth smallest number in an array.
public class Basic6 {
    public static void main(String[] args) {
        int k, n;
        Scanner input = new Scanner(System.in);
        k = input.nextInt();
        n = input.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = input.nextInt();
        }
        Arrays.sort(arr);
        System.out.println(arr[k - 1]);
        System.out.println(arr[n - k]);
        input.close();
    }
    
}