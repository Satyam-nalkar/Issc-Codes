#include<iostream>
#include <vector>
using namespace std;

int main(){
    // vector<char> vec {'a','b','c','d','e'};
 
  
    // // for(char val : vec){
    // //     cout << val << " ";
    // // }   
    // // cout << endl;
    // // vector<int>vec;
    // cout << "size = " << vec.size() << endl;

  vector<int>vec;
 
  vec.push_back(25);
  vec.push_back(35);
  vec.push_back(45);
  cout << "after push back size = " << vec.size() << endl;
  vec.pop_back();
    // cout << val << endl;
    cout << vec.front() << endl;
    cout << vec.back() << endl;
  
     cout << vec.at(1) << endl;
    return 0;
}