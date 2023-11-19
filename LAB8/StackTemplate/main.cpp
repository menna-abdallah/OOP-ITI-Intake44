#include <iostream>

using namespace std;

template < class type>

class Stack {
    int siz;
    int t;
    type *arr;

 public:
    Stack( int _siz=5){
    siz = _siz;
    t = -1;
    arr = new type [siz]{0};
    }

    int get_size(){
    return siz;
    }

    int get_t(){
    return t;
    }

    bool isFull (){
    if ( t >= siz-1){
        return 1;
    } else { return 0;}
    }

    bool isEmpty(){
    if (t == -1){
        return 1;
    } else { return 0;}

    }

    // push/////
    void push(type item){
    if (isFull ()){
       Extend();
    }
        t++;//0,1,....
        arr[t] = item;
        cout << item << " inserted" << endl;


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
    void Extend(){
    type * temp = new type [siz*2];

    for(int i =0 ; i < siz ; i++){
        temp[i]=arr[i];
    }
    delete arr ;
    arr = temp;
    siz = siz*2;
    }
 ~Stack(){

 delete[]arr;
}


// friend Stack print ( Stack );


}; // end of class


/*
  Stack print ( Stack <type> s ){
    for (int i = 0 ; i <= s.t ; i ++){
            cout << s.arr[i] << endl;;
        }
}

*/


int main()
{

    Stack <int> s1(5);

    s1.pop(); //empty
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.push(7);

    s1.pop();//7
    s1.pop();//6
    s1.pop();//5
    s1.pop();//4

    s1.push(7);


   // --------stack 2-------- //
  Stack <char> s2(5);
    s2.pop();//Empty
    s2.push('m');
    s2.push('e');
    s2.pop();
    s2.push('a');
    s2.pop();


    return 0;
}
