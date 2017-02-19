// Program to prlong all prime factors
# include <stdio.h>
# include <math.h>
#include <iostream>
using namespace std;
// A function to prlong all prime factors of a given number n
bool primeFactors(long n)
{
    bool factored = false;
    // Prlong the number of 2s that divide n
    while (n%2 == 0)
    {
        return false;
        n = n/2;
    }
 
    // n must be odd at this polong.  So we can skip one element (Note i = i +2)
    for (long i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, prlong i and divide n
        while (n%i == 0)
        {
            if (i == 2 || i == 3 || i == 5 || i == 23 || i == 31)
                factored = true;
            else{
                return false;
            }
            n = n/i;
        }
    }
    return factored && (n == 2 || n == 3 || n == 5 || n == 23 || n == 31);
}

// A function to check if n is palindrome
int isPalindrome(long n)
{
    // Find reverse of n
    long rev = 0;
    for (long i = n; i > 0; i /= 10)
        rev = rev*10 + i%10;
 
    // If n and rev are same, then n is palindrome
    return (n==rev);
}
// prlongs palindrome between min and max
void countPal(long min, long max)
{
    for (long i = min; i <= max; i++)
        if (isPalindrome(i))
            if(primeFactors(i))
                cout << i << endl;
}

void isTriangle() {
    // variables
    int check,number(1),dots(1);
    // loop to create -1 setinal to kill program
    while (check >=0){
    cout << "Enter the number to check if it is triangular or -1 to exit " << endl;
    //input the number to check
    cin >> check;
    // start a loop to check number 
    while(number<=check){
        number=number+(number+1);
        dots++;
    }
    // if number is equal to check then is triangular
    if (number==check)
    {
        cout << "Number is triangular" << endl;
        cout << "the number of dots on a side is" << dots << endl; 
    }
    else cout << "BAD" << endl; 
    }
}

/* Driver program to test above function */
int main()
{
    isTriangle();
    // cout << primeFactors(19791) << endl;
    // countPal(0, 20000000000);
    return 0;
}