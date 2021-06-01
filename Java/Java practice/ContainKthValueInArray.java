import java.util.HashSet;

import java.util.*;
public class ContainKthValueInArray {
    public static void main(String[] args) {
        int arr[]={3,2,4,5,8,6,10,-5,-7,-13};
        Set<Integer> ss = new HashSet<>();
        int k=19;
        boolean ans=false;
        int sum=0;
        for(int element:arr){
            ss.add(sum);
            sum+=element;
            if(ss.contains(sum-k)){
                ans=true;
                break;
            }
        }
        if(ans){
            System.out.println("True");
        }else
        System.out.println("False");
    }
}
