#include<iostream>
using namespace std;
class Complex{
int real,imag;
public:
  void getNumber(){
    cout<<"enter the real part and imaginary part:"<<endl;
    cin>>real>>imag;
  }
  void AddComplex(Complex c1,Complex c2){
    Complex c3;
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    cout<<"The sum of two complex numbers is:"<<c3.real<<"+"<<c3.imag<<"i"<<endl;
  }

};
int main(){
Complex c1,c2;
c1.getNumber();
c2.getNumber();
c1.AddComplex(c1,c2);

}
