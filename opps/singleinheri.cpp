#include <iostream>
using namespace std;

class student{
  int roll;
  char name[20];
public:
  void getdata(){
    cout<<"enter roll no";
    cin>>roll;
    cout <<"enter name ";
    cin>>name;
  }
  void showdata(){
    cout<<"\nroll no is"<<roll;
    cout<<"\nname is "<<name;
  }
};
class Test:public student{
  int sub1,sub2;
public:
  void getmark(){
    cout<<"enter mark of sub1 & sub2";
    cin>> sub1>>sub2;
  }
  void showmark(){
    cout<<"\nmark in sub1 : "<<sub1;
<<<<<<< HEAD
    cout<<"\nmarl in sub2 : "<<sub2;
=======
    cout<<"\nmarl in sub2 : "<<sub2<<endl;
>>>>>>> refs/remotes/origin/main
  }
};
int main(){
  Test t1;
  t1.getdata();
  t1.getmark();
  t1.showdata();
  t1.showmark();
}
