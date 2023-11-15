#include<iostream>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
#include<Point.h>
#include<Shape.h>
using namespace std;





class Regtangle : public Shape {
public:

    Regtangle (){
    }

    void draw(){
        setcolor(getcolor());

	    rectangle(Shape::get_x1(),Shape::get_y1(),Shape::get_x2(),Shape::get_y2());
	}

}; // end regtangle class*/


class Circle : public Shape {
    int r;
public:

    Circle ( int _r =0){
    cout << "circle Created"<<endl;
    r =_r;
    }
    void set_r(int _r){
        r= _r;
    }
    int get_r(){
    return r;
    }

    // ------------- overloading---------

    void draw(){
        setcolor(getcolor());

	    circle(Shape :: get_x1 (), Shape::get_y1(),Circle ::get_r());
	    cout << Shape :: get_x1 ()<<Shape::get_y1() << Circle ::get_r()<< endl;

	}

	~Circle(){

    }
}; // end circle class



int main()
{
    int num , opt;
    int i ,j;
   Point p1;
   Point p2;
   Shape sh;
     int color;
    cout << "Enter the number of shaps: ";
    cin >> num;
    //Shape* ptr_arr[num];
    int arr [num]={0};
    for (i = 0 ; i < num ; i++){
    cout << "choose shape : " << i+1 <<endl << "1 - circle" << endl << "2 - line" << endl << "3 - Rectangle" << endl;
        cin >> opt;
        arr[i] = opt; // { 1 , 2 ,3}
    }


    int gd  = DETECT , gm;
        initgraph(&gd,&gm,(char*)"");
        for (int k = 0 ; k <i ; k++){
            cout << arr[k];
        }

    for (j =0 ; j < i; j++){
    if (arr[j] == 1){
            int raduis;
            Circle c (raduis);
            cout << "Enter the raduis : ";
            cin >> raduis;
            c.set_r(raduis);
            cout << "Enter point :";
            cin >>  p1;
            c.set_p1(p1.get_x() , p1.get_y());
            cout << p1.get_x() << endl;
            cout << " select color :";
            cin >> color;
            c.setColor(color);
            c.draw();
    } else if (arr[j] == 2){
        Line l;
        cout << "Enter point 1 : ";
            cin >> p1;
            l.set_p1(p1.get_x() , p1.get_y());
            cout << "Enter point 2 :";
            cin >> p2;
             l.set_p2(p2.get_x() , p2.get_y());
            cout << " select color :";
            cin >> color;
            l.setColor(color);
            l.draw();
    } else if (arr[j] == 3){
    Regtangle r;
        cout << "Enter point 1 : ";
            cin >> p1;
            r.set_p1(p1.get_x() , p1.get_y());
            cout << "Enter point 2 :";
            cin >> p2;
            r.set_p2(p2.get_x() , p2.get_y());
            cout << " select color :";
            cin >> color;
            r.setColor(color);
            r.draw();
    }
}
 getch();
        closegraph();

    return 0;

            }



