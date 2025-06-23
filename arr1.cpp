#include <iostream>
using namespace std;

int main(){
    int size = 5;
    int marks[size]; 
    // cout << sizeof(marks) / sizeof(int) << endl;
    for(int i=0; i<size; i++){
        cin >> marks[i];
    }
    cout << "print the numbers\n";
    for(int i = 0; i<size; i++)
    {
      cout << marks[i] << endl;
    }
     return 0;
}