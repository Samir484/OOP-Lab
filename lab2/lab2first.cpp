#include<iostream>
using namespace std;
class Student{
  char name[20],address[20];
  int roll,marks;
public:
  void getdetails(){
    cout<<"enter the name of Student:"<<endl;
    cin>>name;
    cout<<"enter the roll:"<<endl;
    cin>>roll;
    cout<<"enter the marks :"<<endl;
    cin>>marks;
    cout<<"enter the address:"<<endl;
    cin>>address;
  }
  void showdetails(){
   cout<<"name        address    roll     marks"<<endl;
   cout<<name<<"       "<<address<<"     "<<roll<<"     "<<marks<<endl;
  }
};
int main(){
Student s;
s.getdetails();
s.showdetails();
return 0;
}
