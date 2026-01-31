#include <iostream>
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int count = 0;

    for (int i = 0; i < 5; i++) {
        if (a[i] % 2 != 0) {
            count++;
        }
    }
    cout << "Count of odd numbers: " << count;
    return 0;
}


// #include <iostream>
// using namespace std;

// int main() {
//     int a[5] = {1, 2, 3, 4, 5};
//     int count = 0;

//     for (int i = 0; i < 5; i++) {
//         if (a[i] % 2 == 0) {
//             count++;
//         }
//     }
//     cout << " even numbers: " << count;
//     return 0;
// }