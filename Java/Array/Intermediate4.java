//Find all pairs on integer array whose sum is equal to given number

public class Intermediate4 {
    public static void main(String[] args) {
        int arr[] = { 1, 5, 7, -1, 5 };
        int k = 6;
        int count = 0;
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[i] + arr[j] == k) {
                    count++;
                }
            }
        }
        System.out.println(count);
    }
}
