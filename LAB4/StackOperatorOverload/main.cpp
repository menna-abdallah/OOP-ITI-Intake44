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

Stack operator = (Stack & s){
	t=s.t;
	siz=s.siz;
	delete[] arr;//delete

	arr=new int [siz];//rellaction

	for(int i=0; i<=t; i++){
		arr[i]=s.arr[i];
	}

	return *this;
}

 ~Stack(){
 delete[]arr;
}


friend Stack print ( Stack );


}; // end class

  Stack print ( Stack s ){
    for (int i = 0 ; i <= s.t ; i ++){
            cout << s.arr[i] << endl;;
        }
}



int main()
{

 Stack s1(5);
    s1.push(1);
    s1.push(2);
    s1.push(6);

Stack s2 ;
s2 = s1;
s1.push(20); // 20 dos not belong to s2
s2.pop();
s2.pop();
s2.pop();
s2.pop(); // end s2
s1.pop();

    return 0;
}
