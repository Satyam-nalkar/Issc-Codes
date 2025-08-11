#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(1);     
    dq.push_back(2);     
    dq.push_back(3);
    dq.push_back(4);
    dq.push_back(5);
    dq.push_back(6);
    dq.push_back(7);
    dq.push_back(8);
    dq.push_back(9);
    dq.push_back(10);
    dq.push_back(11);
    dq.push_back(12);

    dq.pop_back(); 
    cout<< dq.front() <<" " << dq.back() << endl; 
    return 0;
}
 