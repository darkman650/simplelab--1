#include <stdio.h>

int main() {
    int count = 0; // Tracks how many primes we have found
    int num = 2;   // The current number being checked (2 is the first prime)

    printf("First 100 prime numbers:\n");

    // Loop until we find 100 primes
    while (count < 100) {
        int isPrime = 1; // Assume the number is prime (1 = true, 0 = false)

        // Check if 'num' is divisible by any number from 2 up to num/2
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // It is divisible, so it's not prime
                break;       // Exit the inner loop early
            }
        }

        // If the number is prime, print it and increment the counter
        if (isPrime == 1) {
            printf("%d ", num);
            count++;
        }

        num++; // Move to the next number
    }

    printf("\n");
    return 0;
}
