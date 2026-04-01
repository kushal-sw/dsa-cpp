// #include <iostream>
// using namespace std;
// int a [] = {-1,1,0,5,2};
// int z = 0;
// int n = sizeof(a)/sizeof(a[0]);
// int findpair(int a[], int z, int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (a[i] + a[j] == z) {
//                 return 1; // Pair found
//             }
//         }
//     }
//     return 0; // No pair found
// }
// int main () {

// if (findpair(a,z,n)) {
//     cout << "Pair found that sums to " << z ;
// } else {
//     cout << "No pair found that sums to " << z ;
// }
// int a [] = {-1,1,0,5,2};
// int z = 0;
// int n = sizeof(a)/sizeof(a[0]);
// }


#include <iostream>
using namespace std;


bool findpair(int a[], int n , int z) {
    for (int i= 0; i < n ; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == z) {
                return true; 
            }
        }
    }
    return false;
}

int main() {
    int a [] = {1 , -2  , 1 , 0 , 5};
    int z = -1;
    int n = sizeof(a)/sizeof(a[0]);
    if (findpair(a, n, z)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;   
}

// ----------------------------------------------------------------------------------------------
