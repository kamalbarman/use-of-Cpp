#include<iostream>
using namespace std;
class student{
    int roll;
    char name[20];

    public:
    void getdata();
    void display();
};

void student::getdata(){
    cout<<"enter roll no : ";
    cin>>roll;

    cout <<"enter name : ";
    cin>>name;
}

void student::display(){
    cout << " roll no is : "<<roll<<endl;
    cout << " name is  : "<<name<<endl;

};

int main(){
    student std;
    std.getdata();
    std.display();
}
