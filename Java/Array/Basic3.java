
//Find the minimum and maximum element in an array.
import java.util.*;
import java.util.Arrays;

public class Basic3 {
    public static void main(String[] args) {
        int n;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = input.nextInt();
        }
        Arrays.sort(arr);
        System.out.println("Minimum number in a array is : " + arr[0]);
        System.out.println("Miximum number in a array is : " + arr[n - 1]);
        input.close();
    }
}
