//Find if there is any subarray with sum equal to zero

import java.util.HashSet;
import java.util.Set;

public class Intermediate12 {
    public static void main(String[] args) {
        int arr[] = { 4, 2, -3, 1, 6 };
        Set<Integer> s = new HashSet<>();
        int n=arr.length;
        boolean ans=false;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(arr[i]==0 || s.contains(sum)||sum==0){
                ans=true;
            }
            s.add(sum);
            
        }
        System.out.print(ans);
    }
}
