//
// Created by Canwen Xu on 2018/11/19.
//
#include <iostream>
using namespace std;

#ifndef WINDOWMANAGER_HELP_H
#define WINDOWMANAGER_HELP_H

void help() {
    cout << "================== Help ==================" << endl;
    cout << "[1] Insert"
         << endl
         << "Format: insert ([width],[height],[x],[y]) [content] [z-order]"
         << endl
         << "Example: insert (2,2,0,0) # 1"
         << endl
         << endl;
    cout << "[2] Remove"
         << endl
         << "Format: remove [window ID]"
         << endl
         << "Example: remove 0"
         << endl
         << endl;
    cout << "[3] Resize"
         << endl
         << "Format: resize [window ID] ([width],[height])"
         << endl
         << "Example: resize 0 (3,2)"
         << endl
         << endl;
    cout << "[3] Move"
         << endl
         << "Format: move [window ID] ([x],[y])"
         << endl
         << "Example: move 1 (1,2)"
         << endl
         << endl;
    cout << "[4] Render"
         << endl
         << "Example: render"
         << endl
         << endl;
    cout << "[5] Exit"
         << endl
         << "Example: exit"
         << endl
         << endl;
    cout << "============== End of Help ==============" << endl;
}

#endif //WINDOWMANAGER_HELP_H
