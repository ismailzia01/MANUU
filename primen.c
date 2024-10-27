#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false; // Even numbers other than 2 are not prime

    // Check divisibility from 3 to square root of n
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false; // Found a divisor, not prime
        }
    }
    return true; // No divisor found, prime
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}
