#include<iostream>
#include<queue>
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
  static int idx = -1; 
Node*buildTree(vector<int> preorder){
 idx++;  

 if(preorder[idx] == -1){
   return NULL;
 }
  
  Node*root = new Node(preorder[idx]);
  root -> left = buildTree(preorder);  // left subtree
  root -> right = buildTree(preorder);  // right subtree

  return root;
}

void inOrder(Node*root){
   if(root == NULL){
      return;
   }
   inOrder(root -> left);
   cout << root->data << " ";
   inOrder(root -> right);
}

 // Leval Order
 void levelOrder(Node*root){
    queue<Node*>q;
  
    q.push(root);
    q.push(NULL);

    while (q.size() > 0){
     Node* curr = q.front();
    q.pop();
   
   if(curr == NULL){
      if(!q.empty()){
         cout << endl;
         q.push(NULL);
         continue;
      }else{
         break;
      }
   }

    cout<< curr -> data << " ";
    
    if(curr -> left != NULL){
        q.push(curr->left);
    } 
    if(curr -> right){
        q.push(curr -> right);  
    }
 }
  cout << endl;
}

 int height(Node*root){
  if(root == NULL){
  return 0;
  }
int leftht = height(root -> left);         
int rightht = height(root -> right);         
return max(leftht,rightht) + 1; 
 }
 
int count(Node* root){
   if(root == NULL){
      return 0; 
   }
  int left_count = count(root -> left);
  int right_count = count(root -> right);
  return left_count + right_count + 1;
                               
}
 
int Sum(Node * root){
   if(root == NULL){
      return 0;
   }
int leftSum = Sum(root -> left);
int rightSum = Sum(root -> right);
return leftSum + rightSum + root -> data;

}

 

 
int main(){
   vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
   Node* root = buildTree(preorder);
   
//    inOrder(root);
//    cout << endl;
   // levelOrder(root);

   cout << "height : "<< height(root) << endl;
   cout << "count : "<< count(root) << endl;
    cout << "sum : "<< Sum(root) << endl;


 return 0;
} 