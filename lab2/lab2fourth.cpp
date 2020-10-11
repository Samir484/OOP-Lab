#include<iostream>
using namespace std;
class Complex{
int real,imag;
public:
  Complex(){//default constructor
    real=0;
    imag=0;
  }
  Complex(int x,int y){//parameterized constructor
    real=x;
    imag=y;
  }
  Complex( Complex &c2){//copy constructor
    cout<<"copy constructor is called:"<<endl;
  real=c2.real;
  imag=c2.imag;
  }
  ~Complex(){
    cout<<"destructor is called"<<endl;
  }

  void PrintNum(){
    cout<<"The complex form of the number is: "<<real<<"+"<<imag<<"i"<<endl;
  }
};
int main(){
Complex c1,c2(2,3);
c1.PrintNum();
c2.PrintNum();
Complex c3(c2);
c3.PrintNum();

}
