#include<iostream>
#include<cstring>
using namespace std;

string removeOccurences(string s,string part){
    while(s.length() > 0 && s.find(part) < s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main(){
    string s = "daabcbaabcbc";
    string part = "abc";
    string result = removeOccurences(s,part);
    cout << "Result:" << result << endl;
    return 0; 
}