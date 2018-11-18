//
// Created by Canwen Xu on 2018/11/16.
//

#ifndef WINDOWMANAGER_WINDOW_H
#define WINDOWMANAGER_WINDOW_H


class Window {
public:
    int getId() const;

    void setId(int id);

public:
    Window(int x, int y, int z, int w, int h, char content);

public:
    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    int getZ() const;

    void setZ(int z);

    int getW() const;

    void setW(int w);

    int getH() const;

    void setH(int h);

    char getContent() const;

    void setContent(char content);

    bool operator<(const Window& window) const;

private:
    int x, y, z, w, h, id;
    char content;
};


#endif //WINDOWMANAGER_WINDOW_H
