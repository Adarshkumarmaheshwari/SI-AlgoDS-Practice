import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Intermediate6 {
    static List<String> aa = new ArrayList<>();
    public static void main(String[] args) {
        
        String str;
        Scanner input = new Scanner(System.in);
        str=input.nextLine();    
        input.close();
        findsubsequence(str, "");
        System.out.println(aa);
        
    }
    public static void findsubsequence(String str, String output){
        if(str.length()==0){
            aa.add(output);
            return;
        }else{
            //adding first character in string
            findsubsequence(str.substring(1), output+str.charAt(0));
            findsubsequence(str.substring(1), output);

        }
    }
}
