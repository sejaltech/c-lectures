// #include <iostream>
// using namespace std;

// // Exercise 1
// void printNumber(int num) {
//     cout << "Number is: " << num << endl;
// }

// // Exercise 2
// void addNumbers(int a, int b) {
//     cout << "Sum is: " << a + b << endl;
// }

// // Exercise 3
// void checkEvenOdd(int num) {
//     if (num % 2 == 0)
//         cout << num << " is Even" << endl;
//     else
//         cout << num << " is Odd" << endl;
// }

// // Exercise 4
// void squareNumber(int num) {
//     cout << "Square is: " << num * num << endl;
// }

// // Exercise 5
// void checkSign(int num) {
//     if (num > 0)
//         cout << num << " is Positive" << endl;
//     else if (num < 0)
//         cout << num << " is Negative" << endl;
//     else
//         cout << "Number is Zero" << endl;
// }

// int main() {

//     printNumber(5);        // Exercise 1
//     addNumbers(5, 10);     // Exercise 2
//     checkEvenOdd(5);       // Exercise 3
//     squareNumber(5);       // Exercise 4
//     checkSign(5);          // Exercise 5

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {

//     // Answer 1: Print numbers from 1 to 10 using for loop
//     for (int i = 1; i <= 10; i++) {
//         cout << i << " ";
//     }
//     cout << endl << endl;

//     // Answer 2: Sum of first 10 natural numbers
//     int sum = 0;
//     for (int i = 1; i <= 10; i++) {
//         sum += i;
//     }
//     cout << "Sum = " << sum << endl << endl;

//     // Answer 3: Multiplication table of a number
//     int num = 5;
//     for (int i = 1; i <= 10; i++) {
//         cout << num << " x " << i << " = " << num * i << endl;
//     }
//     cout << endl;

//     // Answer 4: Factorial of a number
//     int factNum = 5;
//     int fact = 1;
//     for (int i = 1; i <= factNum; i++) {
//         fact *= i;
//     }
//     cout << "Factorial = " << fact << endl << endl;

//     // Answer 5: Simple Calculator using switch
//     int a = 10, b = 5;
//     char op = '+';

//     switch (op) {
//         case '+': cout << "Addition = " << a + b << endl; break;
//         case '-': cout << "Subtraction = " << a - b << endl; break;
//         case '*': cout << "Multiplication = " << a * b << endl; break;
//         case '/': cout << "Division = " << a / b << endl; break;
//         default: cout << "Invalid operator" << endl;
//     }
//     cout << endl;

//     // Answer 6: Display day name using switch
//     int day = 3;
//     switch (day) {
//         case 1: cout << "Monday"; break;
//         case 2: cout << "Tuesday"; break;
//         case 3: cout << "Wednesday"; break;
//         case 4: cout << "Thursday"; break;
//         case 5: cout << "Friday"; break;
//         case 6: cout << "Saturday"; break;
//         case 7: cout << "Sunday"; break;
//         default: cout << "Invalid day";
//     }
//     cout << endl << endl;

//     // Answer 7: Even or Odd using switch
//     int n = 7;
//     switch (n % 2) {
//         case 0: cout << "Even number"; break;
//         case 1: cout << "Odd number"; break;
//     }
//     cout << endl << endl;

//     // Answer 8: Vowel or Consonant using switch
//     char ch = 'a';
//     switch (ch) {
//         case 'a': case 'e': case 'i': case 'o': case 'u':
//         case 'A': case 'E': case 'I': case 'O': case 'U':
//             cout << "Vowel";
//             break;
//         default:
//             cout << "Not a Vowel";
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

// Answer 1: Sum of Two Numbers
int sumTwo(int a, int b) {
    return a + b;
}

// Answer 2: Square of a Number
int square(int n) {
    return n * n;
}

// Answer 2: Cube of a Number
int cube(int n) {
    return n * n * n;
}

// Answer 3: Even or Odd
string evenOdd(int n) {
    if (n % 2 == 0)
        return "Even";
    else
        return "Odd";
}

// Answer 4: Factorial of a Number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Answer 5: Prime Number Check
bool isPrime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Answer 6: Maximum of Three Numbers
int maxOfThree(int a, int b, int c) {
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}

// Answer 7: Swap Two Numbers
void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Answer 8: Sum of Digits
int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Answer 9: Fibonacci Series
void fibonacci(int n) {
    int a = 0, b = 1, c;
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}

// Answer 10: Calculator Functions
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
float divi(int a, int b) { return (float)a / b; }

int main() {

    // Answer 1
    cout << "Sum = " << sumTwo(5, 10) << endl;

    // Answer 2
    cout << "Square = " << square(5) << endl;
    cout << "Cube = " << cube(5) << endl;

    // Answer 3
    cout << "Number is " << evenOdd(7) << endl;

    // Answer 4
    cout << "Factorial = " << factorial(5) << endl;

    // Answer 5
    if (isPrime(7))
        cout << "Prime Number" << endl;
    else
        cout << "Not Prime" << endl;

    // Answer 6
    cout << "Largest = " << maxOfThree(10, 25, 15) << endl;

    // Answer 7
    int x = 5, y = 10;
    swapNumbers(x, y);
    cout << "After Swap: x = " << x << " y = " << y << endl;

    // Answer 8
    cout << "Sum of digits = " << sumOfDigits(123) << endl;

    // Answer 9
    cout << "Fibonacci Series: ";
    fibonacci(5);

    // Answer 10
    cout << "Add = " << add(10, 5) << endl;
    cout << "Sub = " << sub(10, 5) << endl;
    cout << "Mul = " << mul(10, 5) << endl;
    cout << "Div = " << divi(10, 5) << endl;

    return 0;
}
