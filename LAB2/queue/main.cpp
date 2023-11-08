#include <iostream>

using namespace std;

class Queue {
int rear, frnt, siz;
int *arr;

public:
    Queue();
    Queue( int _siz){
    siz = _siz;
    frnt = -1;
    rear = -1;
    arr = new int [siz]{0};
    }

    int get_size(){
    return siz;
    }

    bool isFull (){
    if (rear > siz-1){
        return 1;
    } else { return 0;}
    }

    bool isEmpty(){
    if (-1 == frnt && -1 == rear){
        return 1;
    } else { return 0;}

    }

    // enqueue/////
    void enqueue(int num){
    if (isFull ()){
        cout <<"Overflow"<< endl;
    } else if (isEmpty()){
        frnt++;
        rear++;
        arr[rear] = num;
        //cout << num << " inserted" << endl;
    }else{
        rear++;
        arr[rear] = num;
    }
        //cout << num << " inserted" << endl;

    }

    // dequeue /////
    void dequeue(){
     if (isEmpty()){
      cout <<"UnderFlow"<< endl;
     }
     else {
        int x = arr[frnt];
        for (int i = frnt; i <= rear ; i ++){
            arr[i] = arr [i+1];
        }
            rear = rear -1;
        cout << x << " Deleted" << endl;

    }

    }

~Queue(){
 cout<<"enden"<<endl;
 delete[]arr;
}
friend Queue print ( Queue );

}; // end of class

  Queue print ( Queue q ){
    for (int i = q.frnt ; i <= q.siz-1 ; i ++){
            cout << q.arr[i] << endl;;
        }
}

int main()
{
   // Queue que = new Queue(5);
    Queue que(5);
    //que.dequeue();
    //que.dequeue();//Empty

    que.enqueue(10);
    que.enqueue (15);
    que.enqueue (25);
    que.dequeue();//10
    que.dequeue();//15
    que.enqueue (5);//
    que.dequeue();//25
    que.dequeue();//5
    que.dequeue();//empty

 //   print(que);
  //  print(que);


    return 0;
}
