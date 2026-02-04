// #include <iostream>
// using namespace std;

// int main () {
//     int* pnt = new int;
//     *pnt = 5;
//     cout << *pnt <<endl;
//     cout<<*pnt;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main () {
//     int n;

//     cin >> n;

//     int* arr = new int[n];
//     cout <<"Please enter array elements: ";
//     for (int i = 0; i < n; i++)
//     cin >> arr [i];

    
//     for (int i = 0; i < n; i++)
//     cout << arr [i] << " ";


//     delete[]arr;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main()
// {
//     int *a = new int;
//     int *b = new int;
//     int *sum = new int;

//     cout << "Enter first number: ";
//     cin >> *a;

//     cout << "Enter second number: ";
//     cin >> *b;

//     *sum = *a + *b;

//     cout << "Sum of pointer varoable is : " << *sum;

//     delete a;
//     delete b;
//     delete sum;

//     return 0;
// }


// #include <iostream>
// using namespace std;
// class Animal {
//     public:
//     void eat() {
//         cout << "Animal is eating" <<endl;
//     }
// };
// class Dog : public Animal {
// public:
// void bark() {
//     cout << "Dog is barking" <<  endl;
// }
// };
// int main() {
//     Dog d;
//     d.eat();
//     d.bark();
//     return 0;
// }



#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    void showPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int rollNo;
    void showStudent() {
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s;
    s.name = "Sejal";
    s.age = 18;
    s.rollNo = 5045;

    s.showPerson();
    s.showStudent();
    return 0;
}