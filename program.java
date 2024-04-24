import java.util.Scanner;

public class PrimeNumberChecker {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.print("Nhập một số nguyên dương (nhập 0 để thoát): ");
            int number = scanner.nextInt();

            if (number == 0) {
                System.out.println("Chương trình kết thúc.");
                break;
            }

            if (isPrime(number)) {
                System.out.println(number + " là số nguyên tố.");
            } else {
                System.out.println(number + " không phải là số nguyên tố.");
            }
        }
    }

    // Phương thức kiểm tra một số có phải là số nguyên tố không
    public static boolean isPrime(int number) {
        if (number <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(number); i++) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }
}
