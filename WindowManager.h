//
// Created by Canwen Xu on 2018/11/16.
//
#include <vector>
#include "Window.h"

#ifndef WINDOWMANAGER_WINDOWMANAGER_H
#define WINDOWMANAGER_WINDOWMANAGER_H


class WindowManager {
    int count = 0;
    std::vector<Window> windows;
public:
    int insertWindow(Window window);
    bool removeWindow(int id);
    bool resizeWindow(int id, int w, int h);
    bool moveWindow(int id, int x, int y);
    std::vector<Window> getQueue() const;
};


#endif //WINDOWMANAGER_WINDOWMANAGER_H
