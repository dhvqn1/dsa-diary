#include <iostream>
using namespace std;

int main() {

    char ch;
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z') {
        cout << "uppercase";
    }

    else if(ch >= 'a' && ch <= 'z') {
        cout << "lowercase";
    }

    else {
        cout << "not an alphabet";
    }

    return 0;
}