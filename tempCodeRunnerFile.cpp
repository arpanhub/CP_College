#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isprime(int n){
    for(int i = 2;i < sqrt(n);i++){
        if(n % i == 0){
            return false;
        }
    }
}
int main(){
    bool x = isprime(7);
    if(x) cout<<"prime";
    else cout<<"not prime";
}