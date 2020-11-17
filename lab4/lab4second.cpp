#include <iostream>
using namespace std;
class Distance {
int feet;
float inch;
public:
void setdata(){
        cout<<"enter the feet and inch"<<endl;
        cin>>feet>>inch;
}
operator float(){
        float a;
        a=((feet)+inch/12)/3.28;
        return(a);
}
};
int main(){
        Distance d1;
        d1.setdata();
        float x;
        x=d1;
        cout<<"the distance in feet is"<<x<<endl;
        return 0;
}
