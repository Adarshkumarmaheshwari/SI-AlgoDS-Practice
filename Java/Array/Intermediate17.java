//Find the minimum element in a rotated and sorted array.

public class Intermediate17 {
    public static void main(String[] args) {
        int arr[] = {  1, -2, -3, 0, 7, -8, -2 };
        int n= arr.length;
        int min=arr[0];
        for(int i=1; i<n; i++){
            if(min>arr[i]){
                min=arr[i];
            }
        }
        System.out.println(min);
    }
    
}
