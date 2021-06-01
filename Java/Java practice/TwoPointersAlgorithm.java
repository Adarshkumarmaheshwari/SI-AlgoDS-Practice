import java.util.Arrays;

//Find a Triplets which sum is 0 
public class TwoPointersAlgorithm {
    public static void main(String[] args) {
        int arr[]= {1,6,3,9,3,2,3,4,5,-2,-2};
        Arrays.sort(arr);
        for(int i=0; i<arr.length; i++){
        if(twoSum(arr, -arr[i], i+1)){ //passing array, number which will make it zero, starting position
            System.out.println("True");
            break;
        }else{
            System.out.println("false");
        }
        }

    }
    private static boolean twoSum(int arr[], int x, int i){
        int j=arr.length-1;
        while(i<j){
            if(arr[i]+arr[j]>x){
                j--;
            }else if(arr[i]+arr[j]<x){
                i++;
            }else{
                return true;
            }
        }
        return false;
    }
}
