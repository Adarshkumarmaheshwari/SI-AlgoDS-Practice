/**
 * Intermediate3
 */
public class Intermediate3 {

    public static void main(String[] args) {
        String A = "AB";
        String B = "CD";
        String C = "ACBG";
        boolean flag = true;
        int i = 0, j = 0, k = 0;
        while (i != C.length()) {
            if (j < A.length() && A.charAt(j) == C.charAt(i))
                j++;
            else if (k < B.length() && B.charAt(k) == C.charAt(i))
                k++;
            else
                flag=false;
         i++;
        }
        if (j != A.length() && k != B.length())
        flag=false;
        else
        flag=true;

        if(flag){
            System.out.println("True");
        }else{
            System.out.println("False");
        }
       
        
    }
}