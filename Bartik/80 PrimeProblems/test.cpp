#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

vector<unsigned long> get_primes(unsigned long max){
    vector<unsigned long> primes;
    char *sieve;
    sieve = new char[max/8+1];
    // Fill sieve with 1  
    memset(sieve, 0xFF, (max/8+1) * sizeof(char));
    for(unsigned long x = 2; x <= max; x++)
        if(sieve[x/8] & (0x01 << (x % 8))){
            primes.push_back(x);
            // Is prime. Mark multiplicates.
            for(unsigned long j = 2*x; j <= max; j += x)
                sieve[j/8] &= ~(0x01 << (j % 8));
        }
    delete[] sieve;
    return primes;
}

int main(void){
    vector<unsigned long> primes;
    primes = get_primes(2147483644);
    // return 0;
    // Print out result.
    vector<unsigned long>::iterator it;
    int a = 0;
    for (int i = 0; i < 1000000; i++)
        for(it=primes.begin(); it < primes.end(); it++)
            a = *it;
    cout << a << endl;
    return 0;
}