#include <iostream>
using namespace std;

class employee {
    private:
        int empno;
        char ename[20];
        float basic,da,hra;
    public:
        void getdata(){
            cout <<"enter a emp number ";
            cin >> empno;
            cout <<"enter a ename ";
            cin >> ename;
            cout << "enter a basic , da ,hra ";
            cin >> basic >> da >> hra;
        }

    float calcudata(){
        return basic + da + hra;
    }

    void dispdata(){
        cout << "employee number "<<empno<<endl;
        cout << "employee name "<<ename<<endl;
        cout << "basic: " << basic << ", da: " << da << ", hra: " << hra << endl;

        cout << "net pay  "<<calcudata()<<endl;
    }

};

int main(){
employee emp;
emp.getdata();
emp.dispdata();
    return 0;
}