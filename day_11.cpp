// #include <iostream>
// using namespace std;

// void change (int x) {
//     x = 10;
// }
// int main() {
//     int a = 5;
//     change(a);
//     cout << a << endl;
//     return 0;
// }

// void swap (int x, int y) {
//     x = y;
//     cout << x << " " << y << endl;
// }

// int main() {
//     int x = 5, y = 10;
//     swap(x,y);
//     cout << x << " " << y << endl;
//     return 0;
// }

// call by value (character constant)
#include <iostream>
using namespace std;

// void changeChar(char c)
// {
//     c = 'Z';
//     cout << c << endl;
// }

// int main()
// {
//     char ch = 'A';
//     changeChar(ch);
//     cout << ch << endl;
//     return 0;
// }

// void update(float f)
// {
//     f = f + 5.6;
//     cout << f << endl;
// }
// int main()
// {
//     float num = 10.5;
//     update(num);
//     cout << num << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

// int main() {
//     int var1 = 3;
//     int var2 = 24;
//     int var3 = 17;

//     cout << "address of var1: " << &var1 << endl;
//     cout << "address of var2: " << &var2 << endl;
//     cout << "address of var3: " << &var3 << endl;
// }


int main() {
    int var = 5;
    int * point_var = &var;
    cout << "var = " << var<< endl;
    cout << "address of var(&var) = " << &var << endl;
    cout << "point_var = " << point_var << endl;
    cout << "content of the address pointed to by point_var (*point_var) = " << *point_var << endl;
    return 0;
}