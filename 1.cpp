#include <iostream>
#include <string>

using namespace std;

// Recursive function to print the name n times
void printName(const string& name, int n) {
    // Base case: if n is 0, stop recursion
    // void is imp if fn returns no value 
    if (n <= 0) {
        return;
    }

    cout << name << endl;
    
    printName(name, n - 1);
}

int main() {
    string name;
    int n;

    
    cout << "Enter your name: ";
    getline(cin, name);

    
    cout << "Enter the number of times to print your name: ";
    cin >> n;

    
    printName(name, n);

    return 0;
}

