#include <iostream>
using namespace std;

int main() {
    int glicose;
    cin >> glicose;
    if (glicose <= 100) {
        cout << "Normal" << endl;
    } else if (glicose <= 140) {
        cout << "Elevado" << endl;
    } else {
        cout << "Diabetes" << endl;
    }
    return 0;
}
