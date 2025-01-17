/* write a program that accepts two integers N and M and prints all prime numbers between N and M inclusive such that the su of their
digits is also a prime number.*/
#include <iostream>
#include <cmath>
using namespace std;
                                                // 6 may shift 2
// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N, M;

    
    cout << "Enter the value of N: ";
    cin >> N;
    cout << "Enter the value of M: ";
    cin >> M;

    cout << "Prime numbers between " << N << " and " << M 
         << " such that the sum of their digits is also a prime number:\n";

    for (int i = N; i <= M; i++) {
        if (isPrime(i)) { // Check if the number is prime
            int digitSum = sumOfDigits(i);
            if (isPrime(digitSum)) { // Check if the sum of digits is prime
                cout << i << " ";
            }
        }
    }

    return 0;
}
