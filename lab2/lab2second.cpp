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
  void showdetails(int n,Student s[]){
     cout<<"name\taddress\troll\tmarks"<<endl;
    for(int i=0;i<n;i++)
   cout<<s[i].name<<"\t"<<s[i].address<<"\t"<<s[i].roll<<"\t"<<s[i].marks<<endl;
 }
};
int main(){
  int n;
cout<<"enter the number of students:"<<endl;
cin>>n;
Student s[n];
for(int i=0;i<n;i++){
  s[i].getdetails();
}
s[1].showdetails(n,s);
return 0;
}
