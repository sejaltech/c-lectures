#include <iostream>
using namespace std;

// int main() {
//     int var = 5;
//     int* point_var = &var;
//     cout << "var = " << var << endl;
//     cout << "address of var (&var)= " << &var << endl;
//     cout << "value at point_var (*point_var)= " << *point_var << endl;

//     cout << "point_var = " << point_var << endl;

//     cout << "address of point_var (*point_var)= " << *point_var << endl;



// #include <iostream>
// using namespace std;

// int main() {
//     int var = 5;
//     int* point_var = &var;

//     *point_var = 10;

//     cout << var << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// int var = 5;
// int* point_var = &var;
// cout << "var = " << var << endl;
// cout << "*point_var = " << *point_var << endl;
// cout << "Changing value of var to 7" << endl;
// var = 7;
// cout << "var = " << var << endl;
// cout << "*point_var = " << *point_var << endl;
// cout << "Changing value of *point_var to 10" << endl;
// *point_var = 16;
// cout << "var = " << var << endl;
// cout << "*point_var = " << *point_var << endl;
// return 0;
// }


// wap to increment value of a variable using call by reference
#include <iostream>
using namespace std;

// void increment(int &n) {
//     n = n + 1;
// }

// int main() {
//     int a = 5;
//     increment(a);
//     cout << "value = " << a;
//     return 0;
// }


//wap to find the square of a given number using call by reference
// void square(int &n) {
//     n = n * n;
// }

// int main () {
//     int a = 4;
//     square(a);
//     cout << "square = " << a;
//     return 0;
// }


void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main () {
    int x = 500, y = 100;
    swap(&x, &y);
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;

    return 0;
}