import java.util.Scanner;

public class B5524 {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        scanner.nextLine();

        String [] words = new String[t];
        for(int i = 0; i < t; i++) {
            words[i] = scanner.nextLine();
            words[i] = words[i].toLowerCase();
        }
        for(int i = 0; i < t; i++) {
            System.out.println(words[i]);
        }

        scanner.close();
    }
}
