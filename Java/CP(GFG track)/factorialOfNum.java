import java.util.Scanner;

public class factorialOfNum {

    static int factorial(int n){    
        if (n == 0)    
          return 1;    
        else    
          return(n * factorial(n-1));    
       }  
    public static void main(String[] args) {
        // System.out.println("Enter a number");

        Scanner input = new Scanner(System.in);
        int n=input.nextInt();
        int ans=1;
        // for(int i=1;i<=n;i++){
        //     ans*=i;
        // }

        //////////////Recursion
            ans=factorial(n);
            System.out.println(ans);

    }
}
