// Question  1
// #include <iostream>
// using namespace std;
// class Person {
// public:
//     string name;
//     int age;
//     void displayPerson() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }};
// class Student : public Person {
// public:
//     int rollNo;
//     void displayStudent() {
//         displayPerson();   
//         cout << "Roll No: " << rollNo << endl;
//     }};
// int main() {
//     Student s;
//    s.name = "Sejal";
//     s.age = 18;
//     s.rollNo = 5045;
//     s.displayStudent();

//     return 0;
// }




// Question 2

// #include <iostream>
// using namespace std;

// class Vehicle {
// public:
//     int speed;
//     void showSpeed() {
//         cout << "Speed: " << speed << " km/h" << endl;
//     }
// };
// class Car : public Vehicle {
// public:
//     void showCar() {
//         cout << "This is a car" << endl;
//     }
// };
// int main() {
//     Car c;
//     c.speed = 80;
//     c.showCar();
//     c.showSpeed();
//     return 0;
// }



// Question 3

#include <iostream>
using namespace std;

class Shape {
public:
    int width;
    int height;
};
class Rectangle : public Shape {
public:
    void calculateArea() {
        int area = width * height;
        cout << "Area of Rectangle: " << area << endl;
    }
};
int main() {
    Rectangle r;

    r.width = 10;
    r.height = 5;
    r.calculateArea();
    return 0;
}



