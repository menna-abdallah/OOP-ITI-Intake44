#ifndef MAZE_RUNNER_H
#define MAZE_RUNNER_H
#include <graphics.h>
#include <stdio.h>

class MazeRunner {
private:
    int x, y; // position of the ball

public:
    MazeRunner() : x(20), y(250) {}

    void drawBall() {
        setcolor(WHITE);
        setfillstyle(SOLID_FILL, 5);
        circle(x, y, 10);
        floodfill(x, y, WHITE);
    }
    void moveBall(int dx, int dy) {
        x += dx;
        y += dy;
    }
   int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }
};

#endif
