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


// unary overloading

// #include <iostream>
// using namespace std;

// class Number {
// private:
//     int value;

// public:
//     Number(int v) : value(v) {}

//     // Overload the unary minus (-) operator
//     Number operator-() const {
//         return Number(-value);
//     }

//     void display() const {
//         cout << value << endl;
//     }
// };

// int main() {
//     Number num1(5);
//     Number num2 = -num1; // Using the overloaded - operator

//     num1.display(); // Output: 5
//     num2.display(); // Output: -5

//     return 0;
// }



//  overloading << and >>
#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Friend function to overload the << operator
    friend ostream& operator<<(ostream& os, const Complex& c);

    // Friend function to overload the >> operator
    friend istream& operator>>(istream& is, Complex& c);
};

// Overload the << operator for Complex
ostream& operator<<(ostream& os, const Complex& c) {
    os << c.real << " + i" << c.imag;
    return os;
}

// Overload the >> operator for Complex
istream& operator>>(istream& is, Complex& c) {
    cout << "Enter real part: ";
    is >> c.real;
    cout << "Enter imaginary part: ";
    is >> c.imag;
    return is;
}

int main() {
    Complex c1;
    cout << "Enter a complex number:\n";
    cin >> c1; // Calls the overloaded >> operator
    cout << "You entered: " << c1 << '\n'; // Calls the overloaded << operator
    return 0;
}
