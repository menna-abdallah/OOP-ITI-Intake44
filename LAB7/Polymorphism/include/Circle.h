#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"


class Circle : public Shape {
public:

    Circle ( ){

    }

    // ------------- overloading---------

    void draw(){
        setcolor(getcolor());

	    circle(p1.get_x(),p1.get_y(), r);

	}

	~Circle(){

    }
}; // end circle class

#endif // CIRCLE_H
