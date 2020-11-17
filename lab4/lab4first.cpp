#include <iostream>
using namespace std;

class Distance
{
int feet;
float inch;
public:
Distance (float m)
{
        float f = m * 3.28;
        feet = int(f);
        inch = (f-feet) * 12;
}
void showDistance()
{
        cout<<feet<<" feet "<<inch<<" inch"<<endl;
}
};

int main()
{
        float meter;
        cout<<"Enter distance in meter:  "<<endl;
        cin>>meter;
        Distance d1 = meter;
        d1.showDistance();
        return 0;
}
