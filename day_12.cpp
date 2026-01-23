#include <iostream>
using namespace std;

int main() {
    int var = 5;
    int* point_var = &var;
    cout << "var = " << var << endl;
    cout << "address of var (&var)= " << &var << endl;
    cout << "value at point_var (*point_var)= " << *point_var << endl;

    cout << "point_var = " << point_var << endl;

    cout << "address of point_var (*point_var)= " << *point_var << endl;
    
    return 0;
}