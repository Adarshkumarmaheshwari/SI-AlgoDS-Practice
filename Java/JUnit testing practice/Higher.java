import static org.junit.jupiter.api.Assertions.assertEquals;

import org.junit.Test;

/**
 * Higher
 */
public class Higher {

    public static void main(String[] args) {
        int a = 25;
        int b = -25;
        int c=higher(a, b);
        System.out.println("Result " + c);
    }
    public static int higher(int x,int y){
        if (x<y)
        return x;
        else{
            return y;
        }
    }
    @Test
    public void testHigher(){
        assertEquals(5, higher(3, 5));
        assertEquals(25, higher(25, 25));
    }
}