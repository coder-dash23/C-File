#include <stdio.h>
 
/* Iterative function to reverse digits of num*/
int reverseDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
 
/* Function to check if n is Palindrome*/
int isPalindrome(int n)
{
 
    // get the reverse of n
    int rev_n = reverseDigits(n);
 
    // Check if rev_n and n are same or not.
    if (rev_n == n)
        return 1;
    else
        return 0;
}
 
/*Driver program to test reversDigits*/
int main()
{
    int n = 10;
    printf("Is %d a Palindrome number? -> %s\n", n,
           isPalindrome(n) == 1 ? "true" : "false");
 
    n = 11;
    printf("Is %d a Palindrome number? -> %s\n", n,
           isPalindrome(n) == 1 ? "true" : "false");
    return 0;
}