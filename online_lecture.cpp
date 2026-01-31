// call by Value
// #include <iostream>
// using namespace std;

// // Function for Call by Value
// void changeValue(int num) {
//     num = num + 10;
//     cout << "Value inside function: " << num << endl;
// }

// int main() {
//     int number = 5;

//     cout << "Before function call: " << number << endl;

//     changeValue(number);

//     cout << "After function call: " << number << endl;

//     return 0;
// }



// call by reference
// #include <iostream>
// using namespace std;

// // Function for Call by Reference
// void changeValue(int &num) {
//     num = num + 10;
//     cout << "Value inside function: " << num << endl;
// }

// int main() {
//     int number = 5;

//     cout << "Before function call: " << number << endl;

//     changeValue(number);

//     cout << "After function call: " << number << endl;

//     return 0;
// }


// wriye a c++ program to find the sum of first N naturalnumbers using while loop


// #include <iostream>
// using namespace std;

// int main() {
//     int n, sum = 0, i = 1;

//     cout << "Enter a number: ";
//     cin >> n;

//     while (i <= n) {
//         sum = sum + i;
//         i++;
//     }

//     cout << "Sum of first " << n << " natural numbers is: " << sum;

//     return 0;
// }



// write a c ++ program to count the digits of a given number using while loop

// #include <iostream>
// using namespace std;

// int main() {
//     int num, count = 0;

//     cout << "Enter a number: ";
//     cin >> num;

//     while (num != 0) {
//         num = num / 10;
//         count++;
//     }

//     cout << "Number of digits: " << count;

//     return 0;
// }




// write a c++ program to reverse given number using while loop

#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    cout << "Reversed number: " << reverse;

    return 0;
}
