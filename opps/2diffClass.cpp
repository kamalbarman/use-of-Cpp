#include <iostream>
using namespace std;

class abc; // Forward declaration

class xyz {
    int data;
public:
    void setvalue(int value) {
        data = value;
    }
    friend void add(xyz, abc); // Friend function declaration
};

class abc {
    int data1;
public:
    void setvalue(int value) {
        data1 = value;
    }
    friend void add(xyz, abc); // Friend function declaration
};

// Definition of friend function
void add(xyz n, abc m) {
    cout << "Sum: " << (n.data + m.data1) << endl;
}

int main() {
    xyz x;
    abc a;
    x.setvalue(10);
    a.setvalue(15);
    add(x, a);
    return 0;
}
