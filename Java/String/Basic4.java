//Find Duplicate characters in a string.

public class Basic4 {
    public static void main(String[] args) {
        String str = "Great responsibility";
        char ch[] = str.toCharArray();
        int count;
        int len=ch.length;
        for(int i=0; i<len; i++){
            count=1;
            for(int j=i+1; j<len; j++){
                if(ch[i]==ch[j]&& ch[i]!=' '){
                 count++;
                 ch[j]='%';
                }
            }
            if(count>1 && ch[i]!='%')
            System.out.println(ch[i]);
        }
    }
}
