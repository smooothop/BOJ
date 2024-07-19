import java.util.Scanner;

public class B2588 {
    
    public static void main(String [] args) {  
        Scanner scanner = new Scanner(System.in);

        int a = scanner.nextInt();
        int b = scanner.nextInt();

        System.out.println(a * (b % 10));
        int value1 = (b / 10) - (b / 100) * 10;
        System.out.println(a * value1);
        int value2 = (b / 100);
        System.out.println(a * value2);
        System.out.println(a * b);


        scanner.close();
    }
}
