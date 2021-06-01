//Find duplicates in an array.

public class Intermediate5 {
    public static void main(String[] args) {
        int arr[] = { 1, 2, 6, 7, 8, 9, 5, 6, 7, 6 };
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            int j = Math.abs(arr[i]);
            if (arr[j] >= 0) {
                arr[j] = -arr[j];
            } else {
                System.out.print(j + " ");
            }
        }
    }
}
