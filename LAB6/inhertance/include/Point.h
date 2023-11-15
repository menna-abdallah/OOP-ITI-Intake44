#ifndef POINT_H
#define POINT_H
#include<iostream>
using namespace std;

class Point{
    int x;
    int y;
public :
    Point(){
        x=0;
        y=0;
    }
    Point(int _x,int _y){

        x= _x;
        y= _y;
    }
    void set_x(int _x){
        x=_x;
    }
    int get_x(void){
    return x;
    }
    void set_y(int _y){
        y=_y;
    }
    int get_y(void){
    return y;
    }
    void setxy(int _x,int _y){
        x=_x;
        y=_y;
    }

    ~Point(){
    }
// ------ overloading cin -------
     friend istream& operator >> (istream& in, Point &p);

}; // end class point

istream& operator >> (istream& in, Point &p)
{
    in >> p.x;
    in >> p.y ;
    return in;
}

#endif // POINT_H
