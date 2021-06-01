import java.util.ArrayList;
import java.util.Arrays;

//Find longest consecutive subsequence

public class Intermediate16 {
    public static void main(String[] args) {

        int arr[] = { 1, 9,3, 3, 10, 4,4,5, 20, 2,6,7,8,9 };
        int n = arr.length;
        Arrays.sort(arr);
 
        int ans = 0, count = 0;
       
        ArrayList<Integer> v = new ArrayList<Integer>();
      //  v.add(10);
       
        // Insert repeated elements
        // only once in the vector
        for (int i = 1; i < n; i++)
        {
            if (arr[i] != arr[i - 1])
                v.add(arr[i]);
        }
    
 
        // Find the maximum length
        // by traversing the array
        for (int i = 0; i < v.size(); i++)
        {
            // Check if the current element is
            // equal to previous element +1
            if (i > 0 &&v.get(i) == v.get(i - 1)+1){//doubt with +1
                count++;
                // System.out.print("v.get " + v.get(i));
                // System.out.println("+1 ke sath "+v.get(i - 1)+1);
            }
            else
                count = 1;
 
            // Update the maximum
            ans = Math.max(ans, count);
        }
        System.out.println(ans);
}
}
