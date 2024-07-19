import java.util.Scanner;

public class B25314 {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        for(int i = 0; i < n / 4; i++) {
            System.out.print("long ");
        }
        System.out.println("int");

        scanner.close();
    }
}
