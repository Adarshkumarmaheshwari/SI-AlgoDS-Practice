public class Basic3 {
    public static void main(String[] args) {

        //*******************Method one*****************

        // char str[] = "g  eeks   for ge  eeks  ".toCharArray();
        // int len=str.length;
        // int count=0;
        // for(int i=0; i<len; i++){
        //     if(str[i]!=' '){
        //         str[count++]=str[i];
        //     }
        // }
        // System.out.println(String.valueOf(str).subSequence(0, count));
    
        //*****************Method two*********************
       String str = "g  eeks   for ge  eeks  ";
       String newStr = str.replace(" ", "");
       System.out.println(newStr);
    }
}
