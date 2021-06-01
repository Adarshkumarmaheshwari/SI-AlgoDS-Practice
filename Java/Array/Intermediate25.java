//Create an N*M matrix and take input from the user to populate it and then print the matrix

import java.util.Scanner;

public class Intermediate25 {
    public static void main(String[] args) {
        
    
    int N,M;
    Scanner input = new Scanner(System.in);
    N= input.nextInt();
    M= input.nextInt();
    int arr[][]= new int[N][M];
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            arr[i][j]=input.nextInt();
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++)
            System.out.print(arr[i][j]+ " ");
        System.out.println();
    }
    input.close();
}

}
