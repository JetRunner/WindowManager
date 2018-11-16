#include <iostream>
using namespace std;

int main() {
    string cmd;
    int w, h, x, y, z;
    char c;
    do {
        cin >> cmd;
        if (cmd == "insert") {
            scanf(" (%d,%d,%d,%d) %c %d", &w, &h, &x, &y, &c, &z);
            cout << w << h << x << y << c << z;
        }
        if (cmd != "exit") {
            cout << "Unknown command! Ignoring!" << endl;
        }
    } while (cmd != "exit");
    return 0;
}