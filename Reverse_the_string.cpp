#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

 int main(){
    string str = "string_reverse";
    reverse(str.begin(),str.end());
    cout << str << endl;
    return 0;
 }