#include <iostream>

using namespace std;

class Complex {
private:

    int real;
    int imagn;

public:
    Complex (int _real =0 , int _imagn =0){
        real= _real;
        imagn = _imagn;
    }

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

    void print (){
    cout << "number = " << real;
    if (imagn > 0){
        cout << "+" << imagn <<"j";
    } else if (imagn <0) {
    cout << imagn <<"j";
    }
    }
    //-----------"+"--------//
    Complex operator + ( const Complex & c){
    Complex res (real + c.real ,imagn + c.imagn ) ;

    return res;
    }

     //-----------"-"--------//
    Complex operator - ( const Complex & c){
    Complex res (real - c.real ,imagn - c.imagn ) ;

    return res;
    }
    //-----------"+ int"--------//
    Complex operator + ( int x){
    Complex res (real + x ,imagn) ;

    return res;
    }
    //-----------"- int"--------//
    Complex operator - ( int x){
    Complex res (real - x ,imagn  ) ;

    return res;
    }
        //-----------"=="--------//
    int operator ==( const Complex & c){

    return real == c.real && imagn == c.imagn;
    }
     //-----------"+="--------//
    Complex operator += ( const Complex & c){
        real = real + c.real;
        imagn = imagn + c.imagn;

        return *this ;
    }
    //-----------"++ >>"--------//
    Complex operator ++ ( ){
    real = real +1;

    return *this;
    }
//-----------"-- >>"--------//
    Complex operator -- ( ){
    real = real -1;

    return *this;
    }
     //-----------">> ++"--------//
    Complex operator ++ (int ){
        Complex temp = *this;
        real = real +1;

    return temp;
    }
    //-----------">> ++"--------//
    Complex operator -- (int ){
        Complex temp = *this;
        real = real -1;

    return temp;
    }
//-----------"Casting"--------//
    operator double(){
    return real;
    }
}; // end class
 //-----------"int +"--------//
    Complex operator + ( int x , Complex & c){
    Complex res (c.getReal() + x , c.getImagn ());

    return res;
    }

    //-----------"int -"--------//
    Complex operator - ( int x , Complex & c){
    Complex res (c.getReal() - x , c.getImagn ());

    return res;
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

int main()
{
   Complex c1(3,14);
   Complex c2 (2,10);
   Complex c3;
   cout << "----------------  + operator ---------" << endl;
   c3 = c1+c2;
   c3.print();
   cout << endl;
    cout << "----------------  - operator ---------" << endl;
    c3 = c1-c2;
   c3.print();
   cout << endl;
   cout << "----------------  + integer ---------" << endl;
    c3 = c1+5;
   c3.print();
   cout << endl;
   cout << "----------------  - integer ---------" << endl;
    c3 = c1-5;
   c3.print();
   cout << endl;
    cout << "----------------  int + ---------" << endl;
    c3 = 5 +c1;
   c3.print();
   cout << endl;
   cout << "----------------  int - ---------" << endl;
    c3 = 5 -c1;
   c3.print();
   cout << endl;
   cout << "----------------  == ---------" << endl;
   cout << (c1==c2);
   cout << endl;
    cout << "----------------  += operator ---------" << endl;
    c1 += c2; // c1 = c1 +c2  /// 5 + 24j
   c1.print();
   cout << endl;
    cout << "----------------  ++ >> prefix ---------" << endl;
    ++c1;
   c1.print();
   cout << endl;
   cout << "----------------  -- >> prefix ---------" << endl;
    --c1;
   c1.print();
   cout << endl;
   cout << "----------------  ++ >> postfix ---------" << endl;
    c3 = c1++;
   c3.print(); // return with no increase
   cout << endl;
   c1.print(); // return increase
   cout << endl;
   cout << "----------------  -- >> postfix ---------" << endl;
    c3 = c1--;
    c3.print();  // return with no decrease
    cout << endl;
    c1.print(); // return with decrease
   cout << endl;
   cout << "----------------  casting ---------" << endl
   << (double) c2
   << endl;




    return 0;
}
