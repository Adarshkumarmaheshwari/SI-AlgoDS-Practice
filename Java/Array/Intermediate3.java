//You are given a list of n-1 integers and these integers are in the range of 1 to n. 
//There are no duplicates in the list. 
//One of the integers is missing in the list. Write an efficient code to find the missing integer.
public class Intermediate3 {
    public static void main(String[] args) {
        int arr[] = { 1, 2, 3, 4, 5, 6, 8, 9 };
        int i, total;
        int n = arr.length;
        total = (n + 1) * (n + 2) / 2;
        for (i = 0; i < n; i++)
            total -= arr[i];
        System.out.print(total);
    }
}
