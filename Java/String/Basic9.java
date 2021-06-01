//Check whether the String is a palindrome or not.

public class Basic9 {
    public static void main(String[] args) {
        String str="Kayak";
        str = str.toLowerCase();
        int n=str.length();
        boolean ans=true;
        for(int i=0; i<n/2; i++){
            if(str.charAt(i)!=str.charAt(n-i-1));{
                ans=false;
                break;
            }
        }
        if(ans){
            System.out.println("String is palindrome");
        }else{
            System.out.println("String not is palindrome");
        }
    }
}
