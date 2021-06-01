//Minimum number of Jumps to reach end

public class Intermediate22 {
    public static void main(String[] args) {
        int[] arr = { 1, 3, 6, 3, 2, 3, 6, 8, 9, 5 };
        int n = arr.length;
        if(n <=1)
            System.out.print(0);//Cannot jump from one to other element
        int ladder = arr[0]; //Track largest ladder you have
        int stairs = arr[0]; //Keep track of stirs in the current ladder
        int jump = 1;
        for(int i = 1; i<n; i++){
            if(i == n - 1)
               break;
            if(i + arr[i]>ladder)
                ladder = i + arr[i]; //Ladder building up
            stairs--; //Use up the stairs
            if(stairs ==0){//No stairs are left so, increase the jump
                jump++;
                stairs = ladder - i; //Now get new set of stairs
            }
           
        }
        System.out.println(jump);
    }
}
/*
arr = { 1, 3, 6, 3, 2, 3, 6, 8, 9, 5 };
ladder *|*
           *|*|*|*
              *|*|**|**|**|**|*

Stairs = |
*/