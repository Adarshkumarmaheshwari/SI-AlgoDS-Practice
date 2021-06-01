//Given an array with all distinct elements,
// find the largest three elements. Expected time complexity is O(n) and extra space is O(1).
import java.util.Arrays;

public class Intermediate10 {
    public static void main(String[] args) {
        int[] arr = { 12, 45, 1, -1, 45, 54,54, 23,28, 85, 0, -10 };
        int n=arr.length;
        Arrays.sort(arr);
        int count=0; int check=0;
        for(int i=n-1; i>0;i--){
            if(count<3){
                if(check!=arr[i]){
                System.out.print(arr[i]+" ");
                check=arr[i];
                count++;
                }
            }else{
                break;
            }
        }
    }
}
