
//Check whether k is present in an array of size n or not.
import java.util.Scanner; // Import the Scanner class

public class Basic2 {
    public static void main(String[] args) {
        int n, k;
        Scanner obj = new Scanner(System.in);
        k = obj.nextInt();
        n = obj.nextInt();

        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = obj.nextInt();
        }
        boolean j = false;
        for (int i = 0; i < n; i++) {
            if (k == arr[i]) {
                j = true;
            }
        }
        if (j == true) {
            System.out.println("True");
        } else {
            System.out.println("False");
        }
        obj.close();
    }
}
