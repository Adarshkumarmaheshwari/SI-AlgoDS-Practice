import java.util.Arrays;
import java.util.Scanner;

//Find the range of the array. Range means the difference between the maximum and minimum element in the array.

public class Basic9 {
    public static void main(String[] args) {
        int n;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = input.nextInt();
        }
        Arrays.sort(arr);
        int ans;
        ans = arr[n - 1] - arr[0];
        System.out.print(ans);
        input.close();
    }
}
