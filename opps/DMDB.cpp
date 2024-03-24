#include <iostream>

class DB; 

class DM {
private:
    int meters;
    int centimeters;

public:
    DM(int m = 0, int cm = 0) : meters(m), centimeters(cm) {} 


    friend DM addDistance(const DM& dm1, const DB& db1);


    void display() const {
        std::cout << "Distance: " << meters << " meters and " << centimeters << " centimeters" << std::endl;
    }
};

class DB {
private:
    int feet;
    int inches;

public:
    DB(int f = 0, int in = 0) : feet(f), inches(in) {} 

  
    friend DM addDistance(const DM& dm1, const DB& db1);

 
    void display() const {
        std::cout << "Distance: " << feet << " feet and " << inches << " inches" << std::endl;
    }
};

DM addDistance(const DM& dm1, const DB& db1) {
    int totalCentimeters = (dm1.meters * 100 + dm1.centimeters) + ((db1.feet * 12) + db1.inches) * 2.54;
    int newMeters = totalCentimeters / 100;
    int newCentimeters = totalCentimeters % 100;

    return DM(newMeters, newCentimeters);
}

int main() {
    int meters, centimeters, feet, inches;

    std::cout << "Enter distance in feet: ";
    std::cin >> feet;
    std::cout << "Enter distance in inches: ";
    std::cin >> inches;


    std::cout << "Enter distance in meters: ";
    std::cin >> meters;
    std::cout << "Enter distance in centimeters: ";
    std::cin >> centimeters;

    DM dm1(meters, centimeters);
    DB db1(feet, inches);

    DM result = addDistance(dm1, db1);

    std::cout << "Resulting distance:" << std::endl;
    result.display(); 

  return 0;
}
