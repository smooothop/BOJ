import java.util.Scanner;

public class B27736 {
    
    static int app = 0, rej = 0, inv = 0;
    static int t;
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        t = scanner.nextInt();
        
        // int [] arr = new int[t];
        int a;
        for(int i = 0; i < t; i++) {
            a = scanner.nextInt();
            count(a);
        }
        judge();

        scanner.close();
    }

    public static void count(int a) {
        if(a == 1) {
            app++;
        }
        else if(a == -1) {
            rej++;
        }
        else if(a == 0) {
            inv++;
        }
    }

    public static void judge() {
        if(inv >= (double)t / 2) {
            System.out.println("INVALID");
        }
        else if(app <= rej) {
            System.out.println("REJECTED");
        }
        else if(app > rej) {
            System.out.println("APPROVED");
        }
        
    }
}
