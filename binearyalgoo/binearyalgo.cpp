#include <iostream>
#include <vector>
using namespace std;


int binearysearch(vector<int> arr , int tar) {
    int st = 0 , end = arr.size() - 1;
    
    
    while(st <= end){
        int mid = ( st + end ) /2;

        if ( tar > arr[mid]){
            st = mid + 1;
        } else if (tar < arr[mid]){
            st = mid - 1; 
        }
        else {
            return mid;

        }
        

     

    } 
    return -1;
}


int main() {
    vector<int> arr1 = {-1,3,4,5,9,1,12};
    int tar1 = 12;
    cout << binearysearch( arr1 , tar1) << endl;
  
    vector<int> arr2 = {-2,0,2,4,5,19};
    int tar2 = 0;
  cout << binearysearch( arr2 , tar2) << endl;
    return 0;

}
// binary search ---------------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int> arr, int tar) {
    int st = 0, end = arr.size() - 1;

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (tar > arr[mid]) {
            st = mid + 1;
        } 
        else if (tar < arr[mid]) {
            end = mid - 1; // FIXED
        } 
        else {
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> arr1 = {-1,3,4,5,9,1,12};
    sort(arr1.begin(), arr1.end());

    vector<int> arr2 = {-2,0,2,4,5,19};

    cout << binarySearch(arr1, 12) << endl;
    cout << binarySearch(arr2, 0) << endl;

    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int recbinarySearch(vector<int> arr, int tar ,int st , int end) {
    if (st <= end) {
        int mid = st +  (end - st )  /2;

        if (tar > arr[mid]){
            return recbinarySearch(arr , tar , mid + 1 ,end);
        }else if (tar < arr[mid]){
            return recbinarySearch(arr , tar , st, mid - 1);
        } else {
            return mid;
        }
    }
 
    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (tar > arr[mid]) {
            st = mid + 1;
        } 
        else if (tar < arr[mid]) {
            end = mid - 1; // FIXED
        } 
        else {
            return mid;
        }
    }
    return -1;
}

int main() {
  vector<int> arr1 = {-1,3,4,5,9,12};
   int tar1 = 12;
        cout << recbinarySearch( arr1 , tar1, 0, static_cast<int>(arr1.size()) - 1) << endl;
  
    vector<int> arr2 = {-2,0,2,4,5,19};
     int tar2 = 0;
   cout << recbinarySearch( arr2 , tar2, 0, static_cast<int>(arr2.size()) - 1) << endl;
     return 0;
 }         