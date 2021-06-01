//Write a program to check whether given two strings are anagram or not.
public class Basic6 {
    public static void main(String[] args) {
        String str1="Race".toLowerCase();
        String str2="Care".toLowerCase();
        int n1=str1.length();
        int n2=str2.length();
        if(n1!=n2){
            System.out.println("It is not a anagram. ");
        }
        char newStr1[] = str1.toCharArray();
        char newStr2[] = str2.toCharArray();
        int count=0;
        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                if(newStr1[i]==newStr2[j])
                count++;
                
            }
        }
        if(count==n1){
            System.out.println(str1 + " and "+ str2 + " is a anagram. ");
        }
    }
}
