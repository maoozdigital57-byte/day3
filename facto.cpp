#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n <= 1) {
        return 1;                    // base case
    }
    return n * factorial(n - 1);     // recursive case
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << n << "! = " << factorial(n);
}