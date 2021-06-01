//How do you convert string to integer and integer to string in java?

public class Basic7 {
    public static void main(String[] args) {
        //Method 1 to convert string to integer
     String str1 ="5";
     int result = Integer.parseInt(str1);  //using Integer.paresInt()
     System.out.println(result);
        //Method 2 to convert string to interger
        String str2 = "5";
        Integer result2 = Integer.valueOf(str2); //Integer.valueOf()
        System.out.println(result2);

        /*Convert Integer to String */
        //method one

        int x=10;
        String str = Integer.toString(x);
        System.out.println(str);

        //Second method

        String strr2 = String.valueOf(x);
        System.out.println(strr2);

    }
}
