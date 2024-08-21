#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isprime(int n){
    for(int i = 2;i < sqrt(n);i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    bool x = isprime(7);
    if(x) cout<<"prime";
    else cout<<"not prime";
}
//explantion why this
// 1. we are checking from 2 to sqrt(n) because if a number is not prime then it will have a factor less than or equal to sqrt(n)
// 2. if a number is not prime then it will have a factor less than or equal to sqrt(n) so we are checking till sqrt(n) only
// 3. if a number is not prime then it will have a factor less than or equal to sqrt(n) so we are checking till sqrt(n) only
