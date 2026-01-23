// functions

#include <iostream>
using namespace std;

// void show() {
//     cout << "Hello i am sejal singh";
// }

// int main() {
//     show();
//     return 0;
// }


// void message() {
//     cout<<"HelloC++";
// }
// int main() {
//     message();
//     return 0;
// }


// void addNumbers() {   // function with no arguments
//     int a, b, sum;

//     cout << "Enter two numbers: ";
//     cin >> a >> b;

//     sum = a + b;

//     cout << "Sum = " << sum << endl;
// }

// int main() {
//     addNumbers();   // function call
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void squareNumber() {   // function with no arguments
//     int n;
    
//     cout << "Enter a number: ";
//     cin >> n;
    
//     int square = n * n;
    
//     cout << "Square of " << n << " = " << square << endl;
// }

// int main() {
//     squareNumber();   // function call
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void check() {
//     int n = 7;
//     if(n % 2 == 0)
//     cout << "Even";
//     else
//     cout << "Odd"<<endl;
// }
// int main() {
//     check();
//     return 0;
// }

// void shownumber(int x) {
//     cout << x << endl;
// }   
// int main() {
//     shownumber(5);
//     return 0;
// }

#include <iostream>
using namespace std;

// Exercise 1
void printNumber(int num) {
    cout << "Number is: " << num << endl;
}

// Exercise 2
void addNumbers(int a, int b) {
    cout << "Sum is: " << a + b << endl;
}

// Exercise 3
void checkEvenOdd(int num) {
    if (num % 2 == 0)
        cout << num << " is Even" << endl;
    else
        cout << num << " is Odd" << endl;
}

// Exercise 4
void squareNumber(int num) {
    cout << "Square is: " << num * num << endl;
}

// Exercise 5
void checkSign(int num) {
    if (num > 0)
        cout << num << " is Positive" << endl;
    else if (num < 0)
        cout << num << " is Negative" << endl;
    else
        cout << "Number is Zero" << endl;
}

int main() {

    printNumber(5);        // Exercise 1
    addNumbers(5, 10);     // Exercise 2
    checkEvenOdd(5);       // Exercise 3
    squareNumber(5);       // Exercise 4
    checkSign(5);          // Exercise 5

    return 0;
}
