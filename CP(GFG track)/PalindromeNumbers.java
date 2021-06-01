public class PalindromeNumbers {
    public static void main(String[] args) {
        int num=125;
        int ans=0;
        int r=0;
        while(num>0){
        r=num%10;
        ans=ans*10+r;
        num=num/10;
        }
        System.out.println(ans);

    }
}
