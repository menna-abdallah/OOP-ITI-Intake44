#include <iostream>
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

    Point p1,p2;//object

    public :
    Line() :p1(10,200), p2 (400,50){
        cout<< "creat Line"<<endl;

    }

    Line(int x1, int y1 , int x2 ,int y2){
         p1.setxy(x1,y1);
         p2.setxy(x2,y2);
    }
    void set_p1(int _x,int _y){
        p1.setxy(_x,_y);
    }
     void set_p2(int _x,int _y){
        p2.setxy(_x,_y);
    }
    void draw(){
	    int gd  = DETECT , gm;
        initgraph(&gd,&gm,(char*)"");
	    line(p1.get_x(),p1.get_y(),p2.get_x(),p2.get_y());
	    getch();
        closegraph();
	}
~Line(){

    cout << " end line "<<endl;

}

};

class Circle{ // r & 1points

    int r;
    Point p;//object

    public :
    Circle( int _r = 0):p(0,0){
     r = _r;
    }

    Circle(int _r , int x ,int y){
         r = _r;
         p.setxy(x,y);
    }
    void set_r(int _r){
        r= _r;
    }
     void set_p(int _x,int _y){
        p.setxy(_x,_y);
    }
    int get_r(){
    return r;
    }
   void draw(){
	    int gd  = DETECT , gm;
        initgraph(&gd,&gm,(char*)"");
	    circle( p.get_x (), p.get_y(),r);
	    getch();
        closegraph();
	}
~Circle(){

    cout << " end circle "<<endl;

}

};


int main()
{
   Line line;
   line.draw();

    Circle circle (200);
    circle.draw( );
    return 0;
}
