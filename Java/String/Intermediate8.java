//Split the Binary string into two substring with equal 0’s and 1’s.
public class Intermediate8 {
    public static void main(String[] args) {
        String str = "0100110101";
        int zero=0;
        int one=0;
        int count=0;
        for(int i=0; i<str.length(); i++){
            if(str.charAt(i)=='0')
            zero++;
            else
            one++;
            if(zero==one)
            count++;
        }
        if(one==zero)
            System.out.println(count);
        else
            System.out.println("Not equal");
            
    }
}
