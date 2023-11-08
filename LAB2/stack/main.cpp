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

int main()
{

    Stack s1(5);

    //s1.pop(); //empty
    s1.push(1);
    s1.push(5);
    s1.push(6);
    s1.pop();//6
    s1.pop();//5
    s1.push(7);
    s1.pop();//7
    s1.pop();//Empty
    s1.pop();//Empty

   // s1.pop();//Empty
   // s1.push(7);
   // s1.pop();//7

    //print(s1);


    return 0;
}
