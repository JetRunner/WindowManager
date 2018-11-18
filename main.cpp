#include <iostream>
#include <cstdio>
#include "consts.h"
#include "Screen.h"
#include "Window.h"
#include "help.h"
#include "WindowManager.h"
using namespace std;

int main() {
    string cmd;
    int screenX, screenY;
    cout << "======= Window Manager =======" << endl;
    cout << "== A Canwen Xu's Coursework ==" << endl;
    cout << "=== Stu ID:  2016301500204 ===" << endl;
    cout << "==============================" << endl;

    cout << "Please input the resolution (x,y) of the screen:" << endl;
    scanf("(%d,%d)", &screenX, &screenY);
    Screen screen = Screen(screenX, screenY);
    WindowManager windowManager = WindowManager();
    cout << endl;
    cout << "Now enter command mode. Type 'exit' to exit, and 'help' for help." << endl;
    do {
        cin >> cmd;
        if (cmd == Command::insert) {
            int w, h, x, y, z;
            char c;
            scanf(" (%d,%d,%d,%d) %c %d", &w, &h, &x, &y, &c, &z);
            Window window = Window(x, y, z, w, h, c);
            cout << "Window inserted! ID: " << windowManager.insertWindow(window) << endl;
        } else if (cmd == Command::render) {
            screen.render(windowManager.getQueue());
            screen.print();
            screen.clear();
        } else if (cmd == Command::remove) {
            int id;
            scanf(" %d", &id);
            if (windowManager.removeWindow(id)) {
                cout << "Window removed!" << endl;
            } else {
                cout << "No such window." << endl;
            }
        } else if (cmd == Command::resize) {
            int id, newW, newH;
            scanf(" %d (%d,%d)", &id, &newW, &newH);
            if (windowManager.resizeWindow(id, newW, newH)) {
                cout << "Window resized!" << endl;
            } else {
                cout << "No such window." << endl;
            }
        } else if (cmd == Command::move) {
            int id, newX, newY;
            scanf(" %d (%d,%d)", &id, &newX, &newY);
            if (windowManager.moveWindow(id, newX, newY)) {
                cout << "Window moved!" << endl;
            } else {
                cout << "No such window." << endl;
            }
        } else if (cmd == Command::help) {
            help();
        } else if (cmd != Command::exit) {
            cout << "Unknown command! Ignoring!" << endl;
        }
    } while (cmd != Command::exit);
    return 0;
}
