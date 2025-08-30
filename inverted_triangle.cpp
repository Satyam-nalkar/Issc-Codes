// #include<iostream>
// using namespace std;
// int main(){
//     int n = 4;
//   for(int i = 0; i<n; i++){
//     //for space
//     for(int j = 0; j<i; j++){
//        cout << " ";
//     }
//     //for numbers
//     for(int j = 0; j<n-i; j++){
//           cout << i+1; 
//     }
//     cout << endl;
//   }

//     return 0; 
// } 




#include<iostream>
using namespace std;
int main(){
    int n = 8;
  for(int i = 0; i<n; i++){
      //for space
      for(int j = 1; j <= n-i-1; j++){
       cout << " ";
       }
      //for numbers  
      for(int j = 1; j <= i+1; j++){
          cout << j; 
       }
       //for numbers
      for(int j = i; j >= 1; j--){
          cout << j; 
       }
    cout << endl;
  }

    return 0; 
} 




