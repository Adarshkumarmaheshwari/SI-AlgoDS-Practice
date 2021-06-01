import java.util.Scanner;

//Write a program to find the longest Palindrome in a string.

public class Intermediate4 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Please enter a string");
        String StringIn = input.nextLine();
        System.out.println("Longest palindrom is: "+ getLongestPalindrome(StringIn));
        input.close();
    }
    public static String getLongestPalindrome(String StringIn){
        //validation
        if(StringIn.isEmpty())
        return "Enter valid string";

        if(StringIn.length()==1)
        return StringIn;

        String longest = StringIn.substring(0, 1);
        for(int i=0; i<StringIn.length(); i++){
            //Odd Characters
            String temp = checktheEquality(StringIn,i,i);
            if(longest.length() < temp.length()){
                longest=temp;
            }

            //Even Characters 
            temp=checktheEquality(StringIn, i, i+1);
            if(longest.length() < temp.length()){
                longest=temp;
            }
        }
        return longest;
    }
    public static String checktheEquality(String StringIn, int begin, int end){
        while(begin>=0&&end<=StringIn.length()-1 && StringIn.charAt(begin)==StringIn.charAt(end)){
            begin--;
            end++;
        }
        return StringIn.substring(begin+1, end);
    }
    
}
