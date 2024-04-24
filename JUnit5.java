import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;

public class PrimeNumberCheckerTest {

    @Test
    void testIsPrimeForPrimeNumber() {
        assertTrue(PrimeNumberChecker.isPrime(2));
        assertTrue(PrimeNumberChecker.isPrime(3));
        assertTrue(PrimeNumberChecker.isPrime(5));
        assertTrue(PrimeNumberChecker.isPrime(7));
        assertTrue(PrimeNumberChecker.isPrime(11));
        assertTrue(PrimeNumberChecker.isPrime(13));
        assertTrue(PrimeNumberChecker.isPrime(17));
    }

    @Test
    void testIsPrimeForNonPrimeNumber() {
        assertFalse(PrimeNumberChecker.isPrime(1));
        assertFalse(PrimeNumberChecker.isPrime(4));
        assertFalse(PrimeNumberChecker.isPrime(6));
        assertFalse(PrimeNumberChecker.isPrime(8));
        assertFalse(PrimeNumberChecker.isPrime(9));
        assertFalse(PrimeNumberChecker.isPrime(10));
        assertFalse(PrimeNumberChecker.isPrime(12));
    }

    @Test
    void testIsPrimeForNegativeNumber() {
        assertFalse(PrimeNumberChecker.isPrime(-5));
        assertFalse(PrimeNumberChecker.isPrime(-7));
        assertFalse(PrimeNumberChecker.isPrime(-11));
    }

    @Test
    void testIsPrimeForZero() {
        assertFalse(PrimeNumberChecker.isPrime(0));
    }
}
