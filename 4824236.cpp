#include <iostream>
using namespace std;
int main() {
    long long t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string a;
        cin >> a;
        string x = a;
        cout << a << endl;
        while (a.length() != 2) {
            long long b = a[-1];
            a.pop_back();
            long long c = stoul(a);
            string a = to_string(c-b);
            cout << a << endl;
        }
        if (stoi(a)/11 == 1) {
            cout << "The number " << x << " is divisible by 11." << endl;
        }
        else {
            cout << "The number " << x << " is not divisible by 11." << endl;
        }
    }
}