#include <iostream>
using namespace std;

// Function declarations
int isPrime(int num)
{

    for (int i = 2; i <= num / 2; i++)
    {

        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

void printPrimes(int lower, int upper)
{

    cout << "List of prime numbers between " << lower << " and " << upper << " are: " << endl;

    while (lower <= upper)
    {
        // Printing if current number is prime
        if (isPrime(lower))
        {
            cout << lower << endl;
        }

        lower++;
    }
}

int main()
{
    int lower, upper;

    cout << "Enter the lower and upper limit to list primes: ";
    cin >> lower;
    cin >> upper;

    printPrimes(lower, upper);
    return 0;
}
