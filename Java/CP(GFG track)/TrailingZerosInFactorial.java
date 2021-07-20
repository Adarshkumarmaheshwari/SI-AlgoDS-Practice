public class TrailingZerosInFactorial {
    public static void main(String[] args) {
        //Example 12! = 749001600 //last zeros are 2
        int result=0;
        int n=29;
        for(int i=5; i<=n; i=i*5){
            result+=n/i;
        }
        System.out.println(result);
    }
}
