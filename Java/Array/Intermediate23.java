//Find the two repetitive elements in a given array

public class Intermediate23 {
    public static void main(String[] args) {
       int arr[] = {4, 2, 4, 5, 2,1,1, 3, 1};
       int n=arr.length;
       int TotalRepeatedWords=0;
       int count[]=new int[n];
        for(int i=0; i<n; i++){
            if(count[arr[i]]>0){
                System.out.println(arr[i]);
                TotalRepeatedWords++;
            }else{
                count[arr[i]]++;
            }
        }
        System.out.println("Count of total repeated words are : "+ TotalRepeatedWords);
}
}
