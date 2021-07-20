import java.util.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner input = new Scanner(System.in);
		int t = input.nextInt();
		while(t-->0){
		    int n=input.nextInt();
            int k=input.nextInt();
            int arr[]=new int[n];
            for(int j=0;j<n;j++)
                arr[j]=input.nextInt();
                
            Arrays.sort(arr);
            HashMap<Integer,Integer> hash=new HashMap<>();
            for(int w=0;w<n;w++)
            {
                int a=0;
                if(hash.get(arr[w])!=null)
                    a=hash.get(arr[w]);
                hash.put(arr[w],a+1);
            }
            input.close();
            int v=0;
            for(int w1=0;w1<n;w1++)
            {
                if(hash.get(arr[w1])!=null &&hash.get(arr[w1])>k)
                {
                    System.out.print(arr[w1]+" ");
                    hash.remove(arr[w1]);
                    v=1;
                }
            }
            if(v==0)
                System.out.print(-1);
            System.out.println();
		}
	}
}

/*Geek hosted a coding competition, some of the questions were easy and some of them were hard. You are given an array arr of positive integers of size N and an integer K, arr[i] represents the hardness of each problem of geeks' contest. Among those N numbers, your task is to find the numbers which appear more than K times and print them in increasing order. If no number appears more than K times than print -1.

Input:
1. The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
2. The first line of each test case contains two space-separated integers N and K.
3. The second line contains N space-separated positive integers represents array arr.

Output: For each test case, print the maximum number of chocolates you can collect

Constraints:
1. 1 <= T <= 10
2. 1 <= K, N <= 100000
3. 1 <= arr[i] <= 10^9

Example:
Input:
3
3 1
5 5 6
6 1
2 2 3 3 4 4
4 2
1 2 2 3

Output:
5
2 3 4
-1 */