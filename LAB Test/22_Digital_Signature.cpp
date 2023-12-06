#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <math.h>

using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Function to find the greatest common divisor (GCD)
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// Function to generate a random prime number
int generateRandomPrime() {
    int num;
    do {
        num = rand() % 100 + 50; // Adjust the range as needed
    } while (!isPrime(num));
    return num;
}

// Function to generate public and private keys
void generateKeys(int& n, int& e, int& d) {
    srand(time(0));

    // Choose two distinct prime numbers
    int p = generateRandomPrime();
    int q = generateRandomPrime();

    // Calculate n and phi(n)
    n = p * q;
    int phi = (p - 1) * (q - 1);

    // Choose e such that 1 < e < phi(n) and e is coprime with phi(n)
    do {
        e = rand() % (phi - 2) + 2;
    } while (gcd(e, phi) != 1);

    // Calculate d, the modular multiplicative inverse of e (mod phi(n))
    for (d = 2; d < phi; d++) {
        if ((e * d) % phi == 1) break;
    }
}

// Function to calculate the modular exponentiation (x^y mod m)
int modExp(int x, int y, int m) {
    int result = 1;
    x = x % m;
    while (y > 0) {
        if (y % 2 == 1) {
            result = (result * x) % m;
        }
        y = y / 2;
        x = fmod((x * x), m);
    }
    return result;
}

// Function to create a digital signature
int createDigitalSignature(const string& message, int n, int d) {
    int signature = modExp(message[0], d, n); // Simple example, using the first character of the message
    return signature;
}

// Function to verify a digital signature
bool verifyDigitalSignature(const string& message, int signature, int n, int e) {
    int decrypted = modExp(signature, e, n);
    return decrypted == message[0]; // Simple example, comparing with the first character of the message
}

int main() {
    int n, e, d;
    generateKeys(n, e, d);

    cout << "Public Key (n, e): (" << n << ", " << e << ")" << endl;
    cout << "Private Key (n, d): (" << n << ", " << d << ")" << endl;

    string message;
    cout << "Enter the message to sign: ";
    getline(cin, message);

    int signature = createDigitalSignature(message, n, d);
    cout << "Digital Signature: " << signature << endl;

    // Simulate sending the message and signature over a network

    // Simulate receiving the message and signature
    string receivedMessage;
    int receivedSignature;

    cout << "Enter the received message: ";
    getline(cin, receivedMessage);

    cout << "Enter the received signature: ";
    cin >> receivedSignature;

    // Verify the digital signature
    if (verifyDigitalSignature(receivedMessage, receivedSignature, n, e)) {
        cout << "Digital Signature is valid." << endl;
    } else {
        cout << "Digital Signature is invalid." << endl;
    }

    return 0;
}
