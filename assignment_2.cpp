// 1. Student Class
//Question: Create a class named Student. The class should have:
//· Data members: name, rollNumber, and marks
//· A member function to input student details
//· A member function to display student details
// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
//     string name;
//     int rollNumber;
//     float marks;

// public:
//     void input() {
//         cout << "Enter name: ";
//         getline(cin, name);

//         cout << "Enter roll number: ";
//         cin >> rollNumber;

//         cout << "Enter marks: ";
//         cin >> marks;
//     }

//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Roll Number: " << rollNumber << endl;
//         cout << "Marks: " << marks << endl;
//     }
// };

// int main() {
//     Student s;
//     s.input();
//     s.display();
//     return 0;
// }



// 2. Rectangle Area and Perimeter

// Question: Create a class called Rectangle. The class should include:

// · Data members: length and width

// · A function to calculate area

//· A function to calculate perimeter

// #include <iostream>
// using namespace std;

// class Rectangle {
//     int length, width;

// public:
//     void input() {
//         cout << "Enter length and width: ";
//         cin >> length >> width;
//     }

//     void area() {
//         cout << "Area: " << length * width << endl;
//     }

//     void perimeter() {
//         cout << "Perimeter: " << 2 * (length + width) << endl;
//     }
// };

// int main() {
//     Rectangle r;
//     r.input();
//     r.area();
//     r.perimeter();
//     return 0;

// }



// 3. Simple Calculator
 // Question: Create a class Calculator that performs basic arithmetic operations. Include:
// · Two integer data members
// · Functions for addition, subtraction, multiplication, and divisio

// #include <iostream>
// using namespace std;

// class Calculator {
//     int a, b;
// public:
//     void input() {
//         cout << "Enter two numbers: ";
//         cin >> a >> b;
//     }
//     void add() {
//         cout << "Addition: " << a + b << endl;
//     }
//     void subtract() {
//         cout << "Subtraction: " << a - b << endl;
//     }
//     void multiply() {
//         cout << "Multiplication: " << a * b << endl;
//     }
//     void divide() {
//         cout << "Division: " << a / b << endl;
//     }
// };
// int main() {
//     Calculator c;
//     c.input();
//     c.add();
//     c.subtract();
//     c.multiply();
//     c.divide();
//     return 0;
// }

// 4. Employee Salary Details
// Question: Create a class Employee. The class should contain:
// · Employee ID
// · Employee name
// · Basic salary
// Create a function to calculate and display the total salary.
// #include <iostream>
// using namespace std;

// class Employee {
//     int id;
//     string name;
//     float basicSalary;

// public:
//     void input() {
//         cout << "Enter ID, Name and Basic Salary: ";
//         cin >> id >> name >> basicSalary;
//     }

//     void showSalary() {
//         cout << "Total Salary: " << basicSalary << endl;
//     }
// };

// int main() {
//     Employee e;
//     e.input();
//     e.showSalary();
//     return 0;
// }


// 5. Bank Account
// Question: Create a class BankAccount. Include:
// · Account number
// · Account holder name
// · Balance
// Add functions to:
// · Deposit money
// · Withdraw money

// · Display balance

//  #include <iostream>
// using namespace std;

// class BankAccount {
//     int accNo;
//     string name;
//     float balance;
// public:
//     void input() {
//         cout << "Enter account number, name and balance: ";
//         cin >> accNo >> name >> balance;
//     }
//     void deposit(float amt) {
//         balance += amt;
//     }
//     void withdraw(float amt) {
//         balance -= amt;
//     }
//     void display() {
//         cout << "Balance: " << balance << endl;
//     }
// };
// int main() {
//     BankAccount b;
//     b.input();
//     b.deposit(500);
//     b.withdraw(200);
//     b.display();
//     return 0;
// }



// 6. Book Information
// Question: Create a class named Book. The class should have:
// · Book title
// · Author name
// · Price
// Create functions to input and display book details.
// Objective: Practice encapsulating related data into a single unit.

// #include <iostream>
// using namespace std;

// class Book {
//     string title, author;
//     float price;

// public:
//     void input() {
//         cout << "Enter title, author and price: ";
//         cin >> title >> author >> price;
//     }

//     void display() {
//         cout << "Title: " << title << endl;
//         cout << "Author: " << author << endl;
//         cout << "Price: " << price << endl;
//     }
// };

// int main() {
//     Book b;
//     b.input();
//     b.display();
//     return 0;
// }




// 7. Car Details
// Question: Create a class Car. The class should include:
// · Brand name
// · Model
// · Year
// Create a function to display all car details.
// Objective: Understand how to organize attributes related to one object.

// #include <iostream>
// using namespace std;

// class Car {
//     string brand, model;
//     int year;

// public:
//     void input() {
//         cout << "Enter brand, model and year: ";
//         cin >> brand >> model >> year;
//     }

//     void display() {
//         cout << brand << " " << model << " " << year << endl;
//     }
// };

// int main() {
//     Car c;
//     c.input();
//     c.display();
//     return 0;
// }



// 8. Circle Area and Circumference
// Question: Create a class Circle. Include:
// · Radius as data member
// · Function to calculate area
// · Function to calculate circumference

// #include <iostream>
// using namespace std;
// class Circle {
//     float radius;
// public:
//     void input() {
//         cout << "Enter radius: ";
//         cin >> radius;
//     }
//     void area() {
//         cout << "Area: " << 3.14 * radius * radius << endl;
//     }
//     void circumference() {
//         cout << "Circumference: " << 2 * 3.14 * radius << endl;
//     }
// };
// int main() {
//     Circle c;
//     c.input();
//     c.area();
//     c.circumference();
//     return 0;
// }


// 9. Simple Interest Calculation
// Question: Create a class Interest. The class should contain:
// · Principal amount
// · Rate of interest
// · Time period
// Create a function to calculate simple interest.

// #include <iostream>
// using namespace std;
// class Interest {
//     float p, r, t;
// public:
//     void input() {
//         cout << "Enter principal, rate and time: ";
//         cin >> p >> r >> t;
//     }
//     void calculate() {
//         cout << "Simple Interest: " << (p * r * t) / 100 << endl;
//     }
// };
// int main() {
//     Interest i;
//     i.input();
//     i.calculate();
//     return 0;
// }




// 10. Student Result System
// Question: Create a class Result. Include:
// · Student name
// · Marks in three subjects
// Create functions to:
// · Calculate total marks
// · Calculate average marks

#include <iostream>
using namespace std;

class Result {
    string name;
    int m1, m2, m3;

public:
    void input() {
        cout << "Enter name and 3 marks: ";
        cin >> name >> m1 >> m2 >> m3;
    }

    void total() {
        cout << "Total: " << m1 + m2 + m3 << endl;
    }

    void average() {
        cout << "Average: " << (m1 + m2 + m3) / 3.0 << endl;
    }
};

int main() {
    Result r;
    r.input();
    r.total();
    r.average();
    return 0;
}
