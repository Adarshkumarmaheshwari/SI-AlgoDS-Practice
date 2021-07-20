//Convert an array to reduced form | Set 1 (Simple and Hashing)


import java.util.HashMap;

import java.util.*;
public class ArrayToSmaller {
    public static void main(String[] args) {
        int arr[] = {10, 20, 15, 12, 11, 50};
        int n = arr.length;
        int temp[]=arr.clone();
        Arrays.sort(temp);
        HashMap<Integer, Integer> map = new HashMap<>();
        int v=0;
        for(int i=0; i<n; i++){
            map.put(temp[i], v++);//indexs will be stored
        }
        for (int i = 0; i < n; i++)
        arr[i] = map.get(arr[i]);//using the unsorted are to get the indexes
        for (int i = 0; i < n; i++)
        System.out.print(arr[i] + " ");
    }
    
}
