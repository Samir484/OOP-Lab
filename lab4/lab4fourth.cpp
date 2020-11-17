#include <iostream>
#include <cmath>
using namespace std;
class cartesian {
int x,y;
public:
cartesian(){
        x=0;
        y=0;
}
cartesian(float a,float b){
        x=a;
        y=b;
}
float getx(){
        return(x);
}
float gety(){
        return(y);
}
};
class polar {
float r,theta;
public:
polar(){
        r=0;
        theta=0;
}
polar(cartesian c){
        float p=c.getx();
        float q=c.gety();
        r=sqrt(p*p+q*q);
        theta=atan(q/p);
}
void show(){
        cout<<"the polar co-ordinates is:"<<r<<","<<theta<<endl;
}
};

int main(){
        int a,b;
        cout<<"enter the cartesian co-ordinates"<<endl;
        cin>>a>>b;
        cartesian c(a,b);
        polar p;
        p=c;
        p.show();

        return 0;
}
