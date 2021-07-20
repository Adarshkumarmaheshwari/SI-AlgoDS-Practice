/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	FastReader input = new FastReader();
        PrintWriter out = new PrintWriter(System.out);        
        int t=input.nextInt();
        while(t--!=0){
        long a,b,c,d,k;
        a=input.nextInt();
        b=input.nextInt();
        c=input.nextInt();
        d=input.nextInt();
        k=input.nextInt();
        long minstep=0;
        minstep = Math.abs(c-a)+Math.abs(b-d);
        if(minstep>k){
            System.out.println("NO");
        }
        if(minstep%2!=0){
            if(k%2!=0){
                out.println("YES");
            }else{
                out.println("NO");
            }
        }else{
            if(k%2==0){
                out.println("YES");
            }else{
                out.println("NO");
            }
        }
        out.flush();
    }
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
