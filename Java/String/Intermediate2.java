//Write a program to remove Duplicate characters from the String.

import java.util.Arrays;

public class Intermediate2 {
    public static void main(String[] args) {
        String str = "WaahBeteMaujKarDi";
        str = str.toLowerCase();
        char ch[]=str.toCharArray();
        int n=str.length();
        int index=0;
        for(int i=0; i<n; i++){
            int j;
            for(j=0; j<n; j++){
                if(ch[i]==ch[j]){
                    break;
                }
            }
            if(i==j){
                ch[index++]=ch[i];
            }
        }
        System.out.print(String.valueOf(Arrays.copyOf(ch, index)));
    }
}
