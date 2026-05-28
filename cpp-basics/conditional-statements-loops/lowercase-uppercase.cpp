#include <iostream>
using namespace std;

int main() {

    char ch;
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z') {
        cout << "uppercase\n";
    }

    else if(ch >= 'a' && ch <= 'z') {
        cout << "lowercase\n";
    }

    else {
        cout << "not an alphabet\n";
    }

    return 0;
}