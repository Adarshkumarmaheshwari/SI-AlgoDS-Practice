import java.util.Scanner;

class Hoop_Jump{
    public static void main(String[] args) {
        int t;
        Scanner input = new Scanner(System.in);
        t=input.nextInt();
        while(t--!=0)
        {
            int k;
            int ans=0;
            k=input.nextInt();
            ans=k/2+1;
            System.out.println(ans);
        }
    }
}