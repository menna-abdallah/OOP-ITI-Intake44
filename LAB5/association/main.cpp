#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
using namespace std;

class Point{
    int x;
    int y;
public :
    Point(){
        x=0;
        y=0;
        cout << "Default Constructor Point "<<endl;
    }
    Point(int _x,int _y){

        x= _x;
        y= _y;
        cout << "Paramter Constructor Point"<<endl;
    }


    void set_x(int _x){
        x=_x;
    }
    int get_x(){
    return x;
    }
    void set_y(int _y){
        y=_y;
    }
    int get_y(){
    return y;
    }
    void setxy(int _x,int _y){
        x=_x;
        y=_y;
    }
    void paint(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }

    ~Point(){
        cout << " end Point "<<endl;
    }

}; // end class point

class Line{ // 2 points

    public :

    Line(){
    }

//------ association------//
   void draw(){
       Point p1 (100,20);
       Point p2 (10,300);
	    int gd  = DETECT , gm;
        initgraph(&gd,&gm,(char*)"");
	    line(p1.get_x(),p1.get_y(),p2.get_x(),p2.get_y());
	    getch();
        closegraph();
	}
~Line(){

    cout << " end Line "<<endl;

}

}; // end line class

class Circle{ // 2 points

    public :

    Circle(){
    }
//------ association------//
   void draw( int r , Point & p){
	    int gd  = DETECT , gm;
        initgraph(&gd,&gm,(char*)"");
	    circle(r , p.get_x (), p.get_y());
	    getch();
        closegraph();
	}
~Circle(){

    cout << " end circle "<<endl;

}

}; // end class circle

int main()
{
    Line line;
    line.draw();

   Point pc(100,200);
   Circle c;
   c.draw(500 , pc);
    return 0;
}
