//Check whether n is present in an array of size m or not.

import java.util.Scanner; // Import the Scanner class

class Basic1 {
    public static void main(String[] args) {
        int arr[];
        arr = new int[10];
        Scanner myObj = new Scanner(System.in); // Create a Scanner object
        for (int i = 0; i < 10; i++) {
            arr[i] = myObj.nextInt();
        }
        myObj.close();
        for (int i = 0; i < 10; i++) {
            System.out.println(arr[i]);
        }
        
    }
}