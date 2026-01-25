// 1. . Write a program to pass an integer to a function using call by value.

// #include <iostream>
// using namespace std;

// void show(int x) {
//     cout << "Value is: " << x;
// }

// int main() {
//     int a = 10;
//     show(a);
//     return 0;
// }


// Q2.

// · Write a program to subtract two numbers using call by value.

// · Write a program to multiply two numbers using call by value.

// · Write a program to add 10 to a number using call by value.

// #include <iostream>
// using namespace std;

// void subtract(int a, int b) {
//     cout << "Subtraction: " << a - b;
// }

// int main() {
//     subtract(10, 5);
//     return 0;
// }

// Answer No. B

// #include <iostream>
// using namespace std;

// void multiply(int a, int b) {
//     cout << "Multiplication: " << a * b;
// }

// int main() {
//     multiply(4, 5);
//     return 0;
// }


// Answer No. C

// #include <iostream>
// using namespace std;

// void addTen(int x) {
//     x = x + 10;
//     cout << "After adding 10: " << x;
// }

// int main() {
//     int a = 20;
//     addTen(a);
//     return 0;
// }


// Q3. Write a program to check whether a number is even or odd using call by value.

// #include <iostream>
// using namespace std;

// void check(int n) {
//     if (n % 2 == 0)
//         cout << "Even";
//     else
//         cout << "Odd";
// }

// int main() {
//     check(7);
//     return 0;
// }


// Q4. Write a program to find the factorial of a number using call by value.

// #include <iostream>
// using namespace std;

// void factorial(int n) {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//         fact *= i;
//     cout << "Factorial: " << fact;
// }

// int main() {
//     factorial(5);
//     return 0;
// }

// Q5. Write a program to find the cube of a number using call by value.

// #include <iostream>
// using namespace std;

// void cube(int n) {
//     cout << "Cube: " << n * n * n;
// }

// int main() {
//     cube(3);
//     return 0;
// }


//Q6. Write a C++ program using call by reference to swap two numbers.

// #include <iostream>
// using namespace std;

// void swap(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     int x = 5, y = 10;
//     swap(x, y);
//     cout << "After swap: " << x << " " << y;
//     return 0;
// }


//Q7. Write a function that uses call by reference to increment a number by 1.
// #include <iostream>
// using namespace std;

// void increment(int &n) {
//     n++;
// }

// int main() {
//     int a = 10;
//     increment(a);
//     cout << "After increment: " << a;
//     return 0;
// }


//Q8. Write a C++ program to find the square of a number using call by reference.

// #include <iostream>
// using namespace std;

// void square(int &n) {
//     n = n * n;
// }

// int main() {
//     int a = 6;
//     square(a);
//     cout << "Square: " << a;
//     return 0;
// }

// //Q9. Write a function using call by reference to find the maximum of two numbers.
// #include <iostream>
// using namespace std;

// void max(int &a, int &b) {
//     if (a > b)
//         cout << "Max: " << a;
//     else
//         cout << "Max: " << b;
// }

// int main() {
//     int x = 8, y = 12;
//     max(x, y);
//     return 0;
// }

//Q10. Write a function using call by reference to add bonus to an employee salary.
// #include <iostream>
// using namespace std;

// void addBonus(int &salary) {
//     salary += 2000;
// }

// int main() {
//     int salary = 15000;
//     addBonus(salary);
//     cout << "Updated Salary: " << salary;
//     return 0;
// }


// Q11. Write a program to find the largest of three numbers using call by value.
// #include <iostream>
// using namespace std;

// void largest(int a, int b, int c) {
//     if (a > b && a > c)
//         cout << a << " is largest";
//     else if (b > c)
//         cout << b << " is largest";
//     else
//         cout << c << " is largest";
// }

// int main() {
//     largest(10, 25, 15);
//     return 0;
// }


// Q12. Write a program to reverse a number using call by value

// #include <iostream>
// using namespace std;

// void reverse(int n) {
//     int rev = 0;
//     while (n > 0) {
//         rev = rev * 10 + n % 10;
//         n /= 10;
//     }
//     cout << "Reverse: " << rev;
// }

// int main() {
//     reverse(1234);
//     return 0;
// }

// Q13. Write a program to calculate simple interest using call by value.

// #include <iostream>
// using namespace std;

// void interest(int p, int r, int t) {
//     int si = (p * r * t) / 100;
//     cout << "Simple Interest: " << si;
// }

// int main() {
//     interest(1000, 5, 2);
//     return 0;
// }


//Q14. Write a program to calculate area of a circle using call by reference.
// #include <iostream>
// using namespace std;

// void area(float r, float &a) {
//     a = 3.14 * r * r;
// }

// int main() {
//     float radius = 7, result;
//     area(radius, result);
//     cout << "Area: " << result;
//     return 0;
// }

// Q15. Write a program to update marks of a student by adding grace marks using call by reference.

#include <iostream>
using namespace std;

void addGrace(int &marks) {
    marks += 5;
}

int main() {
    int marks = 45;
    addGrace(marks);
    cout << "Updated Marks: " << marks;
    return 0;
}
