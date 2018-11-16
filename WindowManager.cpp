//
// Created by Canwen Xu on 2018/11/16.
//

#include "WindowManager.h"

void WindowManager::insertWindow(Window window) {
    WindowManager::windows.push(window);
}

std::priority_queue<Window> WindowManager::getQueue() const {
    return WindowManager::windows;
}
