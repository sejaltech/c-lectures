// array and string

// #include <iostream>
// using namespace std;
// int main() {


// int arr [5] = {10, 20, 30, 40, 50};
// cout << arr[0]<<endl;
// cout<<arr[1]<<endl;
// cout<<arr[2]<<endl;
// cout<<arr[4]<<endl;
// cout<<arr;
//  return 0;
// }


// int main() {
//     int arr [5] = {10, 20, 30, 40, 50};
//    for (int i = 0; i < 5; i++)
//    {
//     cout << arr[i]<<endl;

//    }
//    return 0;
// }


// int main() {
//     int numbers[] = {1, 2, 3, 4, 5};

//     cout<<"first element: " <<numbers[0] <<endl;
//     cout<<"Last element: " <<numbers[4] <<endl;

//     numbers [4] = 10;
//     cout<< "modified array: ";

//     for (int i = 0; i < 5; i++) {
//         cout << numbers [i] << " ";

//     }
//     cout <<endl;
//     return 0;

// }

// #include <iostream>
// using namespace std;

// int main() {
//     int numbers[5];

//     cout << "Enter 5 numbers: ";
//     for (int i = 0; i < 5; i++) {
//         cin >> numbers[i];
//     }
//     cout << "First element: " << numbers[0] << endl;

//     cout << "Last element: " << numbers[4] << endl;
//     numbers[4] = 10;
//     cout << "Modified array: ";

//     for (int i = 0; i < 5; i++) {
//         cout << numbers[i] << " ";
//     }

//     cout << endl;
//     return 0;
// }



// int main() {

//     int matrix [2][2]= { {1,2}, {10, 20}};

//     cout << "The 2x2 matrix is :" <<endl;
    
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 2; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// wap in c++ to find the sum of an array

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5], sum = 0;

//     cout << "Enter 5 elements: ";
//     for (int i = 0; i < 5; i++) {
//         cin >> arr[i];
//         sum = sum + arr[i];
//     }

//     cout << "Sum of array elements: " << sum << endl;

//     return 0;
// }


// wap in c++to find the largest array in element
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5];

//     cout << "Enter 5 elements: ";
//     for (int i = 0; i < 5; i++) {
//         cin >> arr[i];
//     }
//     int largest = arr[0];
//     for (int i = 1; i < 5; i++) {
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//     }
//     cout << "Largest element in the array: " << largest << endl;

//     return 0;
// }



#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int smallest = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "Smallest element in the array: " << smallest << endl;

    return 0;
}

