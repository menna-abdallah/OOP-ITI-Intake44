#include <iostream>

using namespace std;

void swap1(int * x, int * y);
void swap2 (int &x,int &y);
int main()
{
int x = 5,y = 6;
cout << "x = " << x << endl << "y = " << y <<endl;

 swap1(&x ,&y);
cout << "x = " << x << endl << "y = " << y <<endl;

 swap2(x ,y);
cout << "x = " << x << endl << "y = " << y << endl;

    return 0;
}
void swap1 (int *x, int *y)
{
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}
void swap2 (int &x,int &y)
{
    int temp;
    temp = x;
    x=y;
    y=temp;
}
