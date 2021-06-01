//Write a program to count the number of occurrences of each character in the string and print it.
public class Basic2 {
    public static void main(String[] args) {
        String str = "geeksforgeeks";
        int count[] = new int[256];
        int len = str.length(); 
        for (int i = 0; i < len; i++)
        count[str.charAt(i)]++; //couting the occurrance of each character and storing in count array

        char ch[]= new char[len]; //new array to store each character of string for comparison
        for(int i=0; i<len; i++){
            ch[i]=str.charAt(i); //storing string in character array
            int find=0;
            for(int j=0; i<len; j++){
                if(str.charAt(i)==ch[j]) //Checking if character exist in a array
                find++;//to print unique characters 
            }
            if(find==1){//Print occurance of single character and avoid duplicacy 
                System.out.println(
                        "Number of Occurrence of "
                        + str.charAt(i)
                        + " is:" + count[str.charAt(i)]);
            }
        
        }
      
       
    }
    }

