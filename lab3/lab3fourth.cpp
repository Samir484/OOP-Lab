#include <iostream>
using namespace std;
class Complex
{
int real, imag;
public:
void accept()
{
        cout<<" Enter Real and Imaginary parts: ";
        cin>>real>>imag;
}
friend Complex operator+(Complex c1, Complex c2);

void display()
{
        cout<<real<<"+"<<imag<<"i"<<endl;
}
};
Complex operator+(Complex c1, Complex c2)
{
        Complex c;
        c.real=c1.real+c2.real;
        c.imag=c1.imag+c2.imag;
        return(c);
}
int main()
{
        Complex c1,c2, sum;
        c1.accept();
        c2.accept();
        sum = c1+c2;
        cout<<"\n Addition of Real and Imaginary Numbers : \n";
        sum.display();
        return 0;
}
