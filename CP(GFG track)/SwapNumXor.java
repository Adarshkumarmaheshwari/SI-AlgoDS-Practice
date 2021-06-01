public class SwapNumXor {
    public static void main(String[] args) {
        int a=5;
        int b=6;
        System.out.println(a +" "+b);
        a=a^b;
        b=b^a;
        a=a^b;

        System.out.println(a +" "+b);

    }
}
