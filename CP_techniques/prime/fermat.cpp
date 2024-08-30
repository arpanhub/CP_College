// Fermatfactors to prime factors
// Time Complexity: O(sqrt(n))
// Space Complexity: O(1)
#include <bits/stdc++.h>
using namespace std;

int fermatFactors(int n) {
    int x = ceil(sqrt(n));
    int y = sqrt(x * x - n);
    while (y * y != x * x - n) {
        x++;
        y = sqrt(x * x - n);
    }
    return x - y;
}
cout << fermatFactors(15) << endl; // 5, 3