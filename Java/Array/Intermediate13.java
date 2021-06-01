//Find Largest sum contiguous Subarray.[Very Important]
//*********************Kadane’s algorithm**************************

public class Intermediate13 {
    public static void main(String[] args) {
        int [] a = {-2, -3, 4, -1, -2, 1, 5, -3};
        int MaxSoFar= Integer.MIN_VALUE, MaxEnd = 0;
        for(int i=0; i<a.length; i++){
            MaxEnd+=a[i];
            if(MaxSoFar<MaxEnd){
                MaxSoFar=MaxEnd;
            }
            if(MaxEnd<0){
                MaxEnd=0;
            }
           
        }
        System.out.print(MaxSoFar);
    }
}
