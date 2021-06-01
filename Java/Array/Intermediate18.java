import java.util.HashMap;
import java.util.Map;

//Given an array of size n and a number k, find all elements thatappear more than n/k times.

public class Intermediate18 {
    public static void main(String[] args) {
        int arr[] = new int[] { 1, 1, 2, 2, 3, 5, 4,
            2, 2, 3, 1, 1, 1 };
            int n=12;
            int k=4;
            int x=n/k;
            HashMap<Integer, Integer> y = new HashMap<>();
            for(int i=0; i<n; i++){
                if(!y.containsKey(arr[i])){ //element doesn't exist in hashtable
                    y.put(arr[i], 1);//put it in table
                }
                else{
                    int count = y.get(arr[i]); //return the value which count of element
                    y.put(arr[i], count+1);//increase the count of existing element
                }
            }
           for(Map.Entry<Integer, Integer> m: y.entrySet()){
               Integer val = (Integer)m.getValue();
               if(val>x){
                   System.out.println(m.getKey());
               }
           }
    }
}
