#include <iostream>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    while (x <= y) {
        cout << "All positions change in year " << x << endl;
        x += 60;
    }
}