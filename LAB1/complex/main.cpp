#include <iostream>

using namespace std;

class Complex {
private:

    int real;
    int imagn;

public:

    void setReal (int _real){
    real = _real;
    }
    int getReal (){
    return real;
    }

    void setImagn (int _imagn){
    imagn = _imagn;
    }
    int getImagn (){
    return imagn;
    }
    // c1.add(num);

    Complex add (Complex num){

    Complex result;

    result.setReal(num.getReal() + real);
    result.setImagn(num.getImagn() + imagn);

    return result;
    }

     Complex sub (Complex num){

    Complex result;
    result.setReal(num.getReal() - real);
    result.setImagn(num.getImagn() - imagn);

    return result;
    }

    void print (){
    cout << "number = " << real;
    if (imagn > 0){
        cout << "+" << imagn <<"j";
    } else if (imagn <0) {
    cout << imagn <<"j";
    }
    }

    friend Complex add2 ( Complex );
};

Complex add(Complex num1 , Complex num2){
     Complex result;
    result.setReal(num1.getReal() + num2.getReal());
    result.setImagn(num2.getImagn() + num2.getImagn());

    return result;
}

Complex sub(Complex num1 , Complex num2){

    Complex result;
    result.setReal(num1.getReal() - num2.getReal());
    result.setImagn(num2.getImagn() - num2.getImagn());

    return result;
    }

void print ( Complex num1){
    int real = num1.getReal();
    int imagn = num1.getImagn();
    cout << "number = " << real;
    if (imagn > 0){
        cout << "+" << imagn <<"j";
    } else if (imagn <0) {
    cout << imagn <<"j";
    }
}
 Complex add2 ( Complex c1 , Complex c2){
     Complex result;
    result.setReal(c1.getReal() + c2.getReal());
    result.setImagn(c1.getImagn() + c2.getImagn());

    return result;

 }
int main()
{
    Complex c1 ,c2;
    c1.setReal(4);
    c1.setImagn(3);
    c2.setReal(6);
    c2.setImagn(4);

    c1.print();
    cout << endl;
    print (c2);
    cout << endl;

    Complex c3 = c1.add(c2);
     c3.print();

    Complex c4 = c1.sub(c2);


    Complex x =  add(c1 ,c2);
    Complex y = sub (c1 , c2);

     cout << endl;


     print(c3);
         cout << endl;

   Complex m = add2(c1,c2);
   m.print();

    return 0;
}
