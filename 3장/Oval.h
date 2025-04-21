#ifndef OVAL_H
#define OVAL_H

class Oval {
private:
    int width;
    int height;

public:
    Oval();
    Oval(int w, int h);
    int getWidth();
    int getHeight();
    void set(int w, int h);
    void show();
};

#endif
