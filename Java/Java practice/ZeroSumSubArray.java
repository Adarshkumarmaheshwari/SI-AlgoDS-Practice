import java.util.HashSet;

//Zero sum subarray
import java.util.*;
public class ZeroSumSubArray {
    public static void main(String[] args) {
        int arr[]={2,1,3,-4,-2};
        Set<Integer> ss = new HashSet<>();
        int sum=0;
        boolean found=false;
        for(int i=0; i<arr.length; i++){
            ss.add(sum);
            sum+=arr[i];
            if(ss.contains(sum)){
                found=true;
                break;
            }else{
                found=false;
            }
        }
        if(found)
        System.out.println("True");
        else 
        System.out.println("False");
    }
}
/*Example
if we sum each value and if there is a sum of array which sum is zero then one of the value in hashset will occur again. 
That's why we are checking if that value occur again then it contain zero else no.
*/