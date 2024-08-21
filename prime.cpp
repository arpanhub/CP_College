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

//more Optimised solution
bool isprime(int n){
    if(n==1) return false;
    if(n==2 || n==3) return true;
    if(n%2==0 || n%3==0) return false;
    for(int i = 5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)==0) return false;
    }
    return true;
}
int main(){
    bool x = isprime(7);
    if(x) cout<<"prime";
    else cout<<"not prime";
}
//explanation
// 1. we are checking from 5 to sqrt(n) because if a number is not prime then it will have a factor less than or equal to sqrt(n)
// 2. if a number is not prime then it will have a factor less than or equal to sqrt(n) so we are checking till sqrt(n) only
// 3. if a number is not prime then it will have a factor less than or equal to sqrt(n) so we are checking till sqrt(n) only
// 4. we are checking for 2 and 3 separately because we are checking for i+2 in the loop so we are checking for 2 and 3 separately
