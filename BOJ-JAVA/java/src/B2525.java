import java.util.Scanner;

public class B2525 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int h = scanner.nextInt();
        int m = scanner.nextInt();
        int t = scanner.nextInt();

        m += t;
        while (m > 59) {
            h++;
            if(h > 23) {
                h = 0;
            }
            m -= 60;
        }
        System.out.println(h + " " + m);

        



        scanner.close();
    }
}