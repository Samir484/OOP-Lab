 #include <iostream>
 #include <cmath>
using namespace std;
class cartesian;
class polar {
float r,theta;
public:
polar(){
        r=0;
        theta=0;
}
polar(float rad,float ang){
        r=rad;
        theta=ang;
}
void show(){
        cout<<"the polar co-ordinates is:"<<r<<","<<theta<<endl;
}
};
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
operator polar() {
        float rad= sqrt(x*x+y*y);
        float ang=atan(y/x);
        return polar(rad,ang);
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
