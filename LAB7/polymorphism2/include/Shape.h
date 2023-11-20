#ifndef SHAPE_H
#define SHAPE_H


class Shape {

public:

    virtual void set_p1(int _x, int _y) = 0;
    virtual void set_p2(int _x, int _y) = 0;
    virtual int get_x1()=0;
    virtual int get_x2()=0;
    virtual int get_y1()=0;
    virtual int get_y2()=0;
    virtual void setColor(int _color)=0;
    virtual int getcolor()=0;
    virtual void draw()=0;


}; // end shape class

#endif // SHAPE_H
