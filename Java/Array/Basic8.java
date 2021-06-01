import java.util.Scanner;
//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algorithm.

class sorting {
    static void sort(int arr[], int n) {
        int low = 0;
        int high = n - 1;
        int mid = 0, temp = 0;
        while (mid <= high) {
            switch (arr[mid]) {
                case 0: {
                    temp = arr[low];
                    arr[low] = arr[mid];
                    arr[mid] = temp;
                    low++;
                    mid++;
                    break;
                }
                case 1: {
                    mid++;
                    break;
                }
                case 2: {
                    temp = arr[mid];
                    arr[mid] = arr[high];
                    arr[high] = temp;
                    high--;
                    break;
                }
            }
        }
    }
}

public class Basic8 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n;
        n = input.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = input.nextInt();
        }
        sorting.sort(arr, n);
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i]);
        }
        input.close();
    }

}
