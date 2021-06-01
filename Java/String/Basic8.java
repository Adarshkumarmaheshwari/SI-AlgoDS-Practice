//Write a program to reverse each word in the given string.

public class Basic8 {
    public static void main(String[] args) {
        String str = "The man is doing right for his future";
        String[] splitArray = str.split(" ");
        String reversedString ="";
        for(int i=0; i<splitArray.length; i++){
            String word = splitArray[i];
            String reversedWord="";
            for(int j=word.length()-1; j>=0; j--){
                reversedWord+= word.charAt(j);
            }
            reversedString+=reversedWord+" ";
        }
        System.out.println(str);
        System.out.println(reversedString);
    }
}
