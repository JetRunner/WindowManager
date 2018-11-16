#include <iostream>
#include <cstdio>
#include "consts.h"
#include "Screen.h"
using namespace std;

int main() {
    string cmd;
    int screenX, screenY;
    int w, h, x, y, z;
    char c;
    cout << "======= Window Manager =======" << endl;
    cout << "== A Canwen Xu's Coursework ==" << endl;
    cout << "==============================" << endl;

    cout << "Please input the resolution (x,y) of the screen:" << endl;
    scanf("(%d,%d)", &screenX, &screenY);
    Screen screen = Screen(screenX, screenY);
    screen.print();
    cout << endl;
    cout << "Now enter command mode. Type 'exit' to exit, and 'help' for help." << endl;
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
