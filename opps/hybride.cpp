#include <iostream>
using namespace std;

class student {
protected:
    int roll;
    char name[20];
public:
    void getdata() {
        cout << "enter roll no: ";
        cin >> roll;
        cout << "enter name: ";
        cin >> name;
    }
    void showdata() {
        cout << "\nroll no is " << roll;
        cout << "\nname is " << name;
    }
};

class Test : public student {
protected:
    int sub1, sub2;
public:
    void getmark() {
        cout << "enter mark of sub1 & sub2: ";
        cin >> sub1 >> sub2;
    }
    void showmark() {
        cout << "\nmark in sub1: " << sub1;
        cout << "\nmark in sub2: " << sub2 << endl;
    }
};

class sport : public Test {
protected:
    char g[10];
public:
    void getSportsData() {
        cout << "enter your sports grade: ";
        cin >> g;
    }
};

class result : public sport {
    int total;
public:
    void calculateTotal() {
        total = sub1 + sub2;
    }
    void display() {
        calculateTotal();
        showdata();
        showmark();
        cout << "\ngrade is " << g;
        cout << "\ntotal = " << total << endl;
    }
};

int main() {
    result t1;
    t1.getdata();
    t1.getmark();
    t1.getSportsData();
    t1.display();
    return 0;
}
