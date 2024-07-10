// #include <iostream>

// using namespace std;

// class Complex {
// private:
//     int real;
//     int imag;

// public:
//     Complex(int r = 0, int i = 0) : real(r), imag(i) {}

//     // Overload the + operator
//     Complex operator-(const Complex& other) {
//         Complex result;
//         result.real = real - other.real;
//         result.imag = imag - other.imag;
//         return result;
//     }

//     void display() {
//         cout << real << " - i" << imag << '\n';
//     }
// };

// int main() {
//     Complex c1(10, 5), c2(2, 4);
//     Complex c3 = c1 - c2; // Calls the overloaded + operator
//     c3.display(); // Output: 12 + i9
//     return 0;
// }

// #include <iostream>

// using namespace std;

// class Complex{
//     private:
//         int real;
//         int imag;
    
//     public:
//         Complex (int r = 0 , int i = 0) : real(r), imag(i) {
//         }

//         Complex operator+(const Complex& other){
//             Complex result;

//             result.real = real+ other.real;
//             result.imag = imag+ other.imag;
//             return result;
//         }

//    void display(){
//      cout<<real<< "+ i"<<imag<<'\n';
//    }

// };

// int main(){
//     Complex c1(2,5),c2(1,3);
//     Complex c3 = c1+c2;
//     c3.display();
//     return 0;

// }

#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v) : value(v) {}

    // Overload the unary minus (-) operator
    Number operator-() const {
        return Number(-value);
    }

    void display() const {
        cout << value << endl;
    }
};

int main() {
    Number num1(5);
    Number num2 = -num1; // Using the overloaded - operator

    num1.display(); // Output: 5
    num2.display(); // Output: -5

    return 0;
}
