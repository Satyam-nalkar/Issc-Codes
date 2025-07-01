#include<iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr ,int tar){  // iterative
    int st = 0, end =arr.size()-1;

    while(st <= end){
        // int mid = (st + end) /2;
        int mid = st + (end - st) / 2;
 
        if(tar > arr[mid]){
            st = mid + 1;
        }
        else if(tar < arr[mid]){
            end = mid -1;
        }
        else {
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr1 = {-1,0,3,4,5,9,12};
    int tar1 = -1;

    cout << binarySearch(arr1,tar1) << endl;

    vector<int> arr2 = {-1,0,3,9,12};
    int tar2 =0;
}
