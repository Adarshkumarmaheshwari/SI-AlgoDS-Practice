

//Maximum profit by buying and selling a share at most twice.

public class Intermediate20 {
    public static void main(String[] args) {
        int price[] = {2, 30, 15, 10, 8, 25, 80};
        int n = price.length;
    //    int profit[] = new int[n];
    //    for (int i = 0; i < n; i++)
    //    profit[i] = 0;
    //    int MaxPrice = price[n-1];
    //    for(int i=n-2; i>=0; i--){
    //     if(price[i]>MaxPrice){//getting max price value
    //         MaxPrice=price[i];
    //     }
    //     //profit
    //     profit[i]=Math.max(profit[i+1], MaxPrice-price[i]);//maximum of previous max value and new one
        

    //    }
    //    int min_price = price[0];
    //     for (int i = 1; i < n; i++) {
            
    //         if (price[i] < min_price)
    //             min_price = price[i];

    //         profit[i] = Math.max(
    //             profit[i - 1],
    //             profit[i] + (price[i] - min_price));
    //     }
    //     int result = profit[n - 1];
    //     System.out.println(result);
        //*************vellypeak approach */
        int profit=0;
        for(int i=1; i<n; i++){
            int sub=price[i]-price[i-1];
            if (sub>0){
                profit+=sub;
            }
        }
        System.out.println(profit);

    }
}
