#include <iostream>
#include <cstdio>
#include "consts.h"
using namespace std;

int main() {
    string cmd;
    int w, h, x, y, z;
    char c;
    do {
        cin >> cmd;
        if (cmd == Command::insert) {
            scanf(" (%d,%d,%d,%d) %c %d", &w, &h, &x, &y, &c, &z);
            cout << w << h << x << y << c << z;
        }
        if (cmd != Command::exit) {
            cout << "Unknown command! Ignoring!" << endl;
        }
    } while (cmd != Command::exit);
    return 0;
}
