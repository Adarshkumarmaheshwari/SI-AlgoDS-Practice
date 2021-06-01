//A Program to check if strings are rotations of each other or not

public class Intermediate1 
{
    public static void main(String[] args) {
        String str1 = "AACD";
        String str2 = "ACDA";

        if(str1.length() == str2.length() && (str1+str2).indexOf(str2)!= -1){
            System.out.println("String are rotation of each other.");
        }else
        System.out.println("String are not rotation of each other.");
    }
}
