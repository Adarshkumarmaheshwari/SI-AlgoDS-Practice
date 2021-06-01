//Find the first non-repeating element in a given array of integers. 

import java.util.HashMap;
import java.util.Map;

public class Intermediate9 {
    public static void main(String[] args) {
        int arr[] = { 9, 4, 9, 6, 7, 4 };
        int n = arr.length;
        Map<Integer, Integer> m = new HashMap<>();
        for(int i=0; i<n; i++){
            if(m.containsKey(arr[i])){
                m.put(arr[i], m.get(arr[i])+1);
            }else{
                m.put(arr[i], 1);
            }
        }
        for(int i=0; i<n; i++){
            if(m.get(arr[i])==1){
                System.out.print(arr[i]+ " ");
                break;
            }
        }
    }
}
