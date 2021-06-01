import java.math.BigInteger;
import java.util.Scanner;

public class Intermediate14 {
    public static void main(String[] args) {
        BigInteger bi = new BigInteger("1");
        int n;
        Scanner input = new Scanner(System.in);
        n=input.nextInt();
        for(int i=1; i<=n; i++){
            bi=bi.multiply(BigInteger.valueOf(i));
        } 
        System.out.println(bi);
        input.close();
    }
}

/*BigInteger class is used for mathematical operation which involves very big integer calculations 
that are outside the limit of all available primitive data types. Like bi.multiply there can be bi.add for adding values.*/