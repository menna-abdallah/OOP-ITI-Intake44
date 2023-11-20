#include<iostream>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
#include "Shape.h"
#include "Circle.h"
#include"Line.h"
#include"Regtangle.h"
using namespace std;

int main()
{
   int num ,opt,color;
    Point p1;
    Point p2;

    do
    {
      cout << "Enter number of shapes: ";
      cin >> num;
        if (0 == num)
        {
            return 0;
        }

        if (num < 0)
        {
            cout << "Enter A Positive Number" << endl;
            cin >> num;
        }
    } while (num < 0);

    Shape* shapes[num];



    for (int i = 0 ; i < num ; i++){
        cout << "choose shape : " << i+1 <<endl << "1 - circle" << endl << "2 - line" << endl << "3 - Rectangle" << endl;
        cin >> opt;
     if (1 == opt){
                int r;
                shapes[i] = new Circle();
                cout << "Enter point: " << endl;
                cin >> p1;
                shapes[i]-> set_p1(p1.get_x(),p1.get_y());
                //cout << shapes[i]->get_x1();
                cout << "Enter radius: " << endl;
                cin >> r;
                shapes[i] -> setR(r);
                cout << "Select Color: " << endl;
                cin >> color;
                shapes [i]->setColor(color);
            }

        else if (2 == opt)
            {
                shapes[i] = new Line();
                cout << "Enter point 1 : " << endl;
                cin >> p1;
                shapes[i]->set_p1(p1.get_x(),p1.get_y());
                // cout << shapes[i]->get_x1();
                cout << "Enter point 2 : " << endl;
                cin >> p2;
                shapes[i]->set_p2(p2.get_x(),p2.get_y());
                cout << "Select Color: " << endl;
                cin >> color;
                shapes [i]->setColor(color);
            }
        else if ( 3 == opt)
            {
                shapes[i] = new Regtangle();
                cout << "Enter point 1: " << endl;
                cin >> p1;
                shapes[i]->set_p1(p1.get_x(),p1.get_y());
                cout << "Enter point 2: " << endl;
                cin >> p2;
                shapes[i]->set_p2(p2.get_x(),p2.get_y());
                //cout << shapes[i]->get_x1()<<" " << shapes[i]->get_y1() << " "<<shapes[i]->get_x2()<<" " << shapes[i]->get_y2();
                cout << "Select Color: " << endl;
                cin >> color;
                shapes [i]->setColor(color);
            }

    }
     int gd  = DETECT , gm;
    initgraph(&gd,&gm,(char*)"");

        for (int i = 0; i < num; i++)
    {
        shapes[i]->draw();
    }

    getch();
    closegraph();

    for (int i = 0; i < num; i++)
    {
        delete shapes[i];
    }
    return 0;
}
