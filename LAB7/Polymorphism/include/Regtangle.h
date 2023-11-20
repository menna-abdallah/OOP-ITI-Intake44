#ifndef REGTANGLE_H
#define REGTANGLE_H
#include "Shape.h"


class Regtangle : public Shape {
public:

    Regtangle (){
    }

    void draw(){
        setcolor(getcolor());

	    rectangle(p1.get_x(),p1.get_y(),p2.get_x(),p2.get_y());
	}

}; // end regtangle class*/


#endif // REGTANGLE_H
