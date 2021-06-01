import java.util.StringTokenizer;
import java.io.*;
class MinimumSumofSubArray{
	public static void main (String[] args)
	{
        FastReader sc = new FastReader();
        PrintWriter out = new PrintWriter(System.out);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int arr[] = new int[n];
            for ( int i = 0 ; i < n; i++)
                arr[i] =sc.nextInt();
            int min = arr[n-1];
            int curSum = 0;
            for ( int i = n-1; i >= 0 ; i--) {
                curSum += arr[i];
                if (min > curSum )
                    min = curSum;
                if (curSum > 0)
                    curSum = 0;
                arr[i] = min;
            }
            for ( int i = 0 ; i < n; i++) 
                out.print(arr[i]+" ");
            out.println();
            
        }out.flush();
	}
}
class FastReader{ 
     
        BufferedReader br; 
        StringTokenizer st; 
  
        public FastReader() 
        { 
            br = new BufferedReader(new
                     InputStreamReader(System.in)); 
        } 
  
        String next() 
        { 
            while (st == null || !st.hasMoreElements()) 
            { 
                try
                { 
                    st = new StringTokenizer(br.readLine()); 
                } 
                catch (IOException  e) 
                { 
                    e.printStackTrace(); 
                } 
            } 
            return st.nextToken(); 
        } 
  
        int nextInt() 
        { 
            return Integer.parseInt(next()); 
        } 
  
        long nextLong() 
        { 
            return Long.parseLong(next()); 
        } 
  
        double nextDouble() 
        { 
            return Double.parseDouble(next()); 
        } 
  
        String nextLine() 
        { 
            String str = ""; 
            try
            { 
                str = br.readLine(); 
            } 
            catch (IOException e) 
            { 
                e.printStackTrace(); 
            } 
            return str; 
        } 
    }