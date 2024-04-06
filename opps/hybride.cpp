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
  protected:
  int sub1,sub2;
public:
  void getmark(){
    cout<<"enter mark of sub1 & sub2";
    cin>> sub1>>sub2;
  }
  void showmark(){
    cout<<"\nmark in sub1 : "<<sub1;
    cout<<"\nmarl in sub2 : "<<sub2<<endl;
  }
};
class result : public sport{
    int total;
    public :
    void display(){
        total = sub1+sub2;
        showdata();
        showmark();
        cout<<"\ngrade is "<<g;
        cout<<"\n total = "<<total<<endl;
    }
};
class sport:public Test{
  public:
  char g[10];
  public:
  void getdata(){
    cout<<"enter your sports grade ";
    cin>>g;
  }
};

int main(){
  result t1;
t1.student::getdata();
t1.getmark();
t1.sport::getdata();
t1.display();
}
