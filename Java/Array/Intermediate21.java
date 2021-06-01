import java.util.Arrays;

//Minimize the maximum difference between the heights.

public class Intermediate21 {
    public static void main(String[] args) {
    int arr[] = {1, 10, 14, 14, 14, 15};
    int n=arr.length;
    int k=6;
    if(n==1){
        System.out.print(0);
    }
    Arrays.sort(arr);
    int ans=arr[n-1]-arr[0];//maximum diff
    int small = arr[0]+k;
    int big=arr[n-1]-k;
    int temp=0;
    if(small>big){
        temp=small;
        small=big;
        big=temp;
    }
    for (int i = 1; i < n-1; i ++)
        {
            int subtract = arr[i] - k;
            int add = arr[i] + k;
    if (subtract >= small || add <= big)
    continue;
    if (big - subtract <= add - small)
    small = subtract;
else
    big = add;
        }
        int FinalAns=Math.min(ans, big - small);
        System.out.print(FinalAns);
    }
}