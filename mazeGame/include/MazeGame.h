#ifndef MAZE_GAME_H
#define MAZE_GAME_H
#include "MazeRunner.h"
#include <graphics.h>
#include <conio.h>
#include <dos.h>


struct Wall {
    int x1, y1, x2, y2;

    Wall() : x1(0), y1(0), x2(0), y2(0) {}

    Wall(int _x1, int _y1, int _x2, int _y2) : x1(_x1), y1(_y1), x2(_x2), y2(_y2) {}
};


class MazeGame {
private:
    MazeRunner runner;
    bool running;
     Wall* mazeWalls;
    int numWalls;

    void drawMaze() {
        cleardevice();

      setcolor(10);
      line(0,100,450,100);  //horizontal line
      line(50,130,400,130);
      line(100,160,450,160);
      line(150,190,300,190);
      line(100,220,250,220);
      line(50,250,200,250);
      line(0,400,500,400);
      line(450,370,500,370);
      line(0,100,0,400); //vertical line
      line(50,130,50,370);
      line(100,160,100,220);
      line(100,280,100,400);
      line(150,250,150,370);
      line(200,280,200,400);
      line(250,220,250,370);
      line(300,190,300,400);
      line(350,160,350,370);
      line(400,190,400,400);
      line(450,100,450,370);
      setcolor(5);
      circle(500,385,10);
      setcolor(WHITE);
    }

    void setupMazeWalls() {
    numWalls = 12; // Total number of walls in the maze
    mazeWalls = new Wall[numWalls];

    // Define and populate maze walls
    mazeWalls[0] = Wall(0, 100, 450, 100);   // Top boundary
    mazeWalls[1] = Wall(0, 100, 0, 400);     // Left boundary
    mazeWalls[2] = Wall(0, 400, 500, 400);   // Bottom boundary
    mazeWalls[3] = Wall(450, 370, 500, 370); // Right boundary

    // Inner walls
    mazeWalls[4] = Wall(50, 130, 400, 130);
    mazeWalls[5] = Wall(100, 160, 450, 160);
    mazeWalls[6] = Wall(150, 190, 300, 190);
    mazeWalls[7] = Wall(100, 220, 250, 220);
    mazeWalls[8] = Wall(50, 250, 200, 250);
    mazeWalls[9] = Wall(100, 280, 100, 400);
    mazeWalls[10] = Wall(150, 250, 150, 370);
    mazeWalls[11] = Wall(200, 280, 200, 400);
}

 bool checkCollision(int newX, int newY) const {
    for (int i = 0; i < numWalls; ++i) {
        if (newX >= mazeWalls[i].x1 && newX <= mazeWalls[i].x2 && newY >= mazeWalls[i].y1 && newY <= mazeWalls[i].y2) {
            return true;
        }
    }
    return false;
}



void displayCongratulationMessage() {
    cleardevice();
    setcolor(WHITE);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(100, 200, "Congratulations!");
    delay(2000);
}

public:
    MazeGame() : runner(), running(false), mazeWalls(nullptr), numWalls(0) {}

void run() {
        int gd = DETECT, gm;
        initgraph(&gd, &gm, "C:\\TC\\BGI");

        drawMaze();
        runner.drawBall();

        setupMazeWalls();

        running = true;

        while (running) {
            if (kbhit()) {
                char key = getch();
                int dx = 0, dy = 0;
                switch (key) {
                    case 72: // Up arrow key
                        dy = -5;
                        break;
                    case 80: // Down arrow key
                        dy = 5;
                        break;
                    case 75: // Left arrow key
                        dx = -5;
                        break;
                    case 77: // Right arrow key
                        dx = 5;
                        break;
                    case ' ': // Exit the game loop if space is pressed
                        running = false;
                        break;
                }

              // Move the ball
                int newX = runner.getX() + dx;
                int newY = runner.getY() + dy;

                // Check for collision with maze walls
                if (!checkCollision(newX, newY)) {
                    cleardevice();
                    drawMaze();
                    runner.moveBall(dx, dy);
                    runner.drawBall();
                if (newX >= 500) {
                        displayCongratulationMessage();
                        running = false;
                    }
                }
        }
    }
        closegraph();

}

~MazeGame() {
    delete[] mazeWalls;
}



};

#endif

