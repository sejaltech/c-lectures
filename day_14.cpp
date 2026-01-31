// Q1. wap a c ++ program to demonstrate encapsulation using a  classe account

// #include <iostream>
// using namespace std;

// class account
// {
//     int balance;

// public:
//     void setBalance(int b)
//     {
//         balance = b;
//     }
// //     int getBalance()
//     {
//         return balance;
//     }
// };
//     int main()
//     {
//         account a;
//         a.setBalance(5000);
//         cout << a.getBalance();
//         return 0;
//     }



// print an integer using class
// create a class number with: 
// one int variable
 // one function to display the value
 // create an objject and print the number

//     #include <iostream>
// using namespace std;

// class Number {
// public:
//     int value;  

//     void display() {  
//         cout << value;
//     }
// };

// int main() {
//     Number obj;     
//     obj.value = 10;
//     obj.display();  

//     return 0;
// }

/// add two numbers using OOP concept

// create a class add with:
// two int variables
// a funcion that add the numbers and prints the sum.

// #include <iostream>
// using namespace std;

// class Add {
// public:
//     int num1;
//     int num2;

//     void sum() {
//         cout << "Sum: " << num1 + num2 << endl;
//     }
// };

// int main() {
//     Add obj;
//     obj.num1 = 67;
//     obj.num2 = 10;
//     obj.sum();

//     return 0;
// }



// Q4

#include <iostream>
using namespace std;

class Check {
public:
    int num; 

    void checkEvenOdd() {  
        if(num % 2 == 0)
            cout << num << " is Even";
        else
            cout << num << " is Odd";
    }
};

int main() {
    Check obj;        
    obj.num = 7;      

    obj.checkEvenOdd();

    return 0;
}