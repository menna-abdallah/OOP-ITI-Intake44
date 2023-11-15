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

    Point* ptr1;
    Point* ptr2;

    public :

    Line(){
        ptr1=NULL;
        ptr2 = NULL;
    }

   void draw( Point* p1, Point* p2){
       ptr1 = p1;
       ptr2 = p2;
	    int gd  = DETECT , gm;
        initgraph(&gd,&gm,(char*)"");
	    line(p1->get_x(),p1->get_y(),p2->get_x(),p2->get_y());
	    getch();
        closegraph();
	}

	void destroy (){
	ptr1 = NULL;
	ptr2 = NULL;
	}
/*
	 void translate( Point* p1, Point* p2 , Point _t){
        Point t;
        t.set_x(_t.get_x);
        t.set_y(_t.get_y);
        ptr1 = p1;
        ptr2 = p2;
	    int gd  = DETECT , gm;
        initgraph(&gd,&gm,(char*)"");
	    line(p1->get_x()+t.get_x(),p1->get_y()+t.get_y(),p2->get_x()+t.get_x(),p2->get_y()+t.get_y());
	    getch();
        closegraph();
	}
	*/
~Line(){

    cout << " end Line "<<endl;

}

}; // end line class

class Circle{ // 2 points

    Point* ptr;
    public :

    Circle(){
    }
//------ aggregiation------//
   void draw( int r , Point* p){
       ptr = p;
	    int gd  = DETECT , gm;
        initgraph(&gd,&gm,(char*)"");
	    circle(r , p->get_x (), p->get_y());
	    getch();
        closegraph();
	}
~Circle(){

    cout << " end circle "<<endl;

}

}; // end class circle

int main()
{
   /* Point pr (100,200);
    Point pl (400,20);
    Point trans (100,200);
    Line line;
    line.draw(&pr , &pl);
    */

   // line.translate(&pr , &pl , trans);


   Point pc(100,200);
   Circle c ();
   c.draw(500 , &pc);
   return 0;
}
