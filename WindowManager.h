//
// Created by Canwen Xu on 2018/11/16.
//
#include <queue>
#include "Window.h"

#ifndef WINDOWMANAGER_WINDOWMANAGER_H
#define WINDOWMANAGER_WINDOWMANAGER_H


class WindowManager {
    std::priority_queue<Window> windows;
public:
    void insertWindow(Window window);
    std::priority_queue<Window> getQueue() const;
};


#endif //WINDOWMANAGER_WINDOWMANAGER_H
