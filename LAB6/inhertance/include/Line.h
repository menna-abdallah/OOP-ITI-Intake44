#ifndef LINE_H
#define LINE_H
#include<graphics.h>
#include<Shape.h>


class Line : public Shape {
public:

    Line ( ){
    }
// ------ overloading-------------
    void draw(){
        Shape::setColor(getcolor());

	    line(p1.get_x(),p1.get_y(),p2.get_x(),p2.get_y());
	    cout << p1.get_x()<< p1.get_y() << endl;
	    cout << "line ----------------";
	}
	~Line(){
    }
}; // end line class

#endif // LINE_H
