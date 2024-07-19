import java.util.Scanner;

public class B25304 {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int x = scanner.nextInt();
        int n = scanner.nextInt();

        int [] price = new int[n];
        int [] quantity = new int [n];

        int totalPrice = 0;
        for(int i = 0; i < n; i++) {
            price[i] = scanner.nextInt();
            quantity[i] = scanner.nextInt();
        
            totalPrice += price[i] * quantity[i];
        }
        if(totalPrice == x) {
            System.out.println("Yes");
        }
        else {
            System.out.println("No");
        }
        


        scanner.close();
    }
}
