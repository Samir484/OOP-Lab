 #include <iostream>
using namespace std;
class Complex {
int real, imag;
public:
void getdata (){
        cout<<"Enter value of real and imag of complex number"<<endl;
        cin>>real>>imag;
}
Complex operator+(Complex obj){
        obj.real =real+obj.real;
        obj.imag =imag+obj.imag;
        return (obj);
}

void display ()
{
        cout<<" Addition of two complex numbers"<<endl;
        cout<<real<<"+"<<imag<<"i";
}
};
int main ()
{
        Complex obj1, obj2, obj3;
        obj1.getdata ();
        obj2.getdata ();
        obj3=obj1+obj2;
        obj3.display ();

}
