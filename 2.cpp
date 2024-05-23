
#include <iostream>
using namespace std;

int sum (int n) {
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}
int main() {
    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a positive number.";
    } else {
        int result = sum(n);
        cout << "Sum of first " << n << " natural numbers is: " << result;
    }

    return 0;
}