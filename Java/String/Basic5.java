//Write a program to reverse the string in place.
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Basic5 
{
    public static void main(String[] args)
    {
        //**********Method one*************//

        String str ="The god is great";
        // StringBuilder build = new StringBuilder(str);
        // build.reverse();
        // System.out.println(build);

        //**********Method two*************//

       char[] newStr = str.toCharArray();
       List<Character> charStr= new ArrayList<>();
        for(char c:newStr)
        charStr.add(c);

        Collections.reverse(charStr);
        for(char e: charStr)
        System.out.print(e);
            
    }
}
