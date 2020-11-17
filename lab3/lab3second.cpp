#include <iostream>
using namespace std;
class Complex {
int real,imag;
public:
void setdata(){
        cout<<"enter the real and imag part:"<<endl;
        cin>>real>>imag;
}
void display(){

        cout<<real<<"+"<<imag<<"i"<<endl;
}
friend Complex operator ++(Complex &,int);
friend Complex operator ++(Complex &);

};
Complex operator ++(Complex &c2,int){
        Complex c;
        c.real=c2.real++;
        c.imag=c2.imag++;
        return c;
}
Complex operator ++(Complex &c1){
        Complex d;
        d.real=++c1.real;
        d.imag=++c1.imag;
        return d;
}

int main(){
        Complex c1,c2,c3;
        c1.setdata();
        c2=++c1;
        cout<<"value after pre increment:"<<endl;
        c1.display();
        c2.display();
        c3=c2++;
        cout<<"value after post increment:"<<endl;
        c3.display();
        c2.display();


        return 0;
}
