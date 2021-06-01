//Find Maximum Product Subarray.

class calc{
    static int min(int a, int b){

        return a<b? a:b; 
    }
    static int max(int a, int b){
            return a>b?a:b;
    }
}
public class Intermediate15 {
    public static void main(String[] args) {
        
        int arr[] = {  1, -2, -3, 0, 7, -8, -2 };
        int n= arr.length;
        int MaxEndHere = 1;//it basically hold the product which is maximum so far

        int MinEndHere=1;//minimum product so far
        int MaxSoFar=0; // Initialize overall max product
        int flag=0;

        for(int i=0; i<n; i++){
            if(arr[i]>0){//if number is positive
                MaxEndHere = MaxEndHere * arr[i];
                MinEndHere = calc.min(MinEndHere * arr[i], 1);
                flag=1;
            }
            else if(arr[i]==0){//if it is 0, back to default values which are 1
                MaxEndHere=1;
                MinEndHere=1;
            }else{//if number is negative
                int temp = MaxEndHere;
                MaxEndHere = calc.max(MinEndHere *  arr[i], 1);//return which ever is max
                MinEndHere = temp * arr[i];
            }
            if(MaxSoFar < MaxEndHere){//updating value to maxsofar
                MaxSoFar=MaxEndHere;
            }
        }
        if(flag ==0 && MaxSoFar==0){
                System.out.println(0);
            }
         else{
                System.out.println(MaxSoFar);
             }
    }
}
