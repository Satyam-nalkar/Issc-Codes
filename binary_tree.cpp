#include<iostream>
#include<vector>
using namespace std;

class Node{
  public:
   int data;
   Node*left;
   Node*right;
    
   Node(int val){
    data = val;
    left = right = NULL;
   }
};

int main(){
    Node(5);
    Node(5);
    cout << left << endl;
   return 0;
}