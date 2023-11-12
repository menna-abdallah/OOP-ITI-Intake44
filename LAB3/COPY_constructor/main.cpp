#include <iostream>

using namespace std;

class Stack {
    int siz;
    int t;
    int *arr;

 public:

    Stack( int _siz=5){
    siz = _siz;
    t = -1;
    arr = new int [siz]{0};
    }

    // copy
/*
    Stack( Stack & s){
    siz = s.siz;
    t = s.t;
    arr = new int [siz];
    for (int i =0 ; i <=t ; i++){
        arr[i] = s.arr[i];
    }
    }*/



    int get_size(){
    return siz;
    }

    int get_t(){
    return t;
    }

    bool isFull (){
    if ( t > siz-1){
        return 1;
    } else { return 0;}
    }

    bool isEmpty(){
    if (t == -1){
        return 1;
    } else { return 0;}

    }

    // push/////
    void push(int num){
    if (isFull ()){
        cout <<"Overflow"<< endl;
    } else {
        t++;//0,1,....
        arr[t] = num;
        cout << num << " inserted" << endl;

    }
    }

    // pop /////
   void pop() {
	if (isEmpty())
	{
	    cout<<"Empty"<<endl;
	}
	else{

        cout<<arr[t]<<endl;
        t--;
	}
}
 ~Stack(){
 cout<<"enden"<<endl;
 delete[]arr;
}


friend Stack print ( Stack );


}; // end of class

  Stack print ( Stack s ){
    for (int i = 0 ; i <= s.t ; i ++){
            cout << s.arr[i] << endl;;
        }
}


void shallDeepFun (Stack s2){
cout<<"Inside Function "<<endl;
s2.push(10);
s2.push(11);

s2.pop();//11
s2.pop();//10
s2.pop();//2
s2.pop();//1
cout<<"outside Function "<<endl;
}


/*
void fun (Stack& s2){
cout<<"Inside Function "<<endl;
s2.push(10);
s2.push(11);

s2.pop();//11
s2.pop();//10
s2.pop();//2
s2.pop();//1
cout<<"outside Function "<<endl;
}
*/

int main()
{

    Stack s1(5);

    s1.push(1);
    s1.push(2);
// calling shallow function by passing implicit copy costructor //
    shallDeepFun(s1);
    // fun (s1);
    s1.push(6);
    s1.pop();//6
    s1.pop();//2
    s1.pop();//1

// calling shallow function by passing explicit copy costructor //

 /*
 1- define copy constructor
 2- call function --> pass the object to the defined constructor

    shsllowFun(s2); // deep function

 */
// calling function by reference &

/*
  fun (s1);

  */

    return 0;
}
