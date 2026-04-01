// #include<iostream>
// #include <cmath>
// #include<iomanip>
// using namespace std;


// int main(){


//     int n = 10 , logn , n2 ,en , nn , i = 1 ;
//     for ( i < n ; i++;)
//     {
//     n2 = n * n ;
//     logn = log(n);
//     nn = pow(n,n);
//     en = exp(n);
// }
//     cout << setw(5) << "n"
//             << setw(10) << "n^2"
//             << setw(10) << "log(n)"
//             << setw(10) << "n^n"
//             << setw(10) << "e^n" << endl;
            

// }

#include<iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main(){

    int n = 10;


    cout << setw(5) << "n"
         << setw(10) << "n^2"
         << setw(10) << "log(n)"
         << setw(15) << "n^n"
         << setw(15) << "e^n" << endl;

    for (int i = 1; i <= n; i++)
    {
        int n2 = i * i;
        double logn = log(i);
        double nn = pow(i, i);
        double en = exp(i);

        cout << setw(5) << i
             << setw(10) << n2
             << setw(10) <<  fixed << setprecision(2) << logn 
             << setw(15) << nn
             << setw(15) << en << endl;
    }
}