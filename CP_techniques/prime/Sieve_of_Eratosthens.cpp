//sieve of eratosthenes- to find all prime numbers upto n
// Time Complexity: O(nloglogn)
// Space Complexity: O(n)
//explaination- 
// 1. Create a list of consecutive integers from 2 through n: (2, 3, 4, ..., n).
// 2. Initially, let p equal 2, the smallest prime number.
// 3. Enumerate the multiples of p by counting in increments of p from 2p to n, and mark them in the list (these will be 2p, 3p, 4p, ...; p itself should not be marked).
// 4. Find the smallest number in the list greater than p that is not marked. If there is no such number, stop. Otherwise, let p now equal this new number (which is the next prime), and repeat from step 3.
// 5. When the algorithm terminates, the unmarked numbers in the list are all the primes below n.
#include <bits/stdc++.h>
using namespace std;

vector<int> sieveOfEratosthenes(int n) {
    vector<int> primes;
    vector<bool> isPrime(n+1,true);
    // isPrime[0] = isPrime[1] = false;
    for(int i=2;i*i<=n;i++){
        if(isPrime[i]){
            for(int j = i*i;j<=n;j=j+i){
                isPrime[j] = false;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            primes.push_back(i);
        }
    }
    return primes;
}
int main(){
    vector<int> primes = sieveOfEratosthenes(30);
    for(int i=0;i<primes.size();i++){
        cout << primes[i] << " ";
    }
    cout << endl;
}
