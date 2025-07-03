#include<iostream>
#include<cstring>
using namespace std;

int main(){
    // char str[] = {'a','b','c','\0'}; // string literals
    // cout << strlen(str) << endl;  // constant pointer
    char str[10];

    cout << "enter char array :";
    // cin.getline(str,100 ,'$');
    cin.getline(str,12);
    for(char ch : str){
        cout << ch <<" ";
    }
    cout << endl;
      
    cout << "output :" << str << endl;
    return 0;
}
