#include<iostream>
// #include<vector>
#include<queue>
using namespace std;


// class Node{
//   public:
//      int data;
//      Node* next;

//      Node(int val){
//         data = val;
//         next = NULL; 
//      }

// };

// class Queue{
//     Node* head;
//     Node* tail; 
  
//   public:
//   Queue(){
//     head = tail = NULL;
//   }

//   void push(int data){ // insrt data at tail of linked list
//     Node* newNode = new Node(data);
//     if(empty()){
//         head = tail = newNode;
//     }else{
//         tail -> next = newNode;
//         tail = newNode;
//     }
//   }

//   void pop(){ // O(n)
//      if(empty()){
//         cout << "LL is empty\n";
//         return;
//      }  

//      Node* temp = head;
//      head = head -> next;
//      delete temp;
//   }

//   int front(){
//     if(empty()){
//         cout << "LL is empty\n";
//         return -1;  
//     }
//     return head -> data;
//   }

//   bool empty(){
//      return head == NULL;
//   }

// };

int main(){
    // Queue q;
    queue<int> q;

    q.push(1);  
    q.push(2);  
    q.push(3);   // 1, 2, 3 
        
    while(!q.empty()){
      cout << q.front() << " ";
      q.pop();  
    }

    cout << endl;
    return 0;
}