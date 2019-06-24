#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int data;
Node *left;
Node *right;
Node (int d){
    this->data=d;
    left=right=nullptr;
}
};

class Solution{
  public:
  void Inorder(Node *root){
    
     if(root){
       stack<Node*>s;
        Node *current=root;
        
        while(!s.empty()||current){
           if(current){
            //  cout << "push" << current->data << "\n";
             s.push(current);
             current=current->left;
           }
           else{
             
               current=s.top();
               s.pop();
               cout <<  current->data << " ";
              //  if(current->right) cout << "right" << current->right->data << "\n";
               current=current->right;
            
             
           }

        }
     }
  }
     void Preorder(Node *root){
       if(!root) 
       return;
       else{
       stack<Node*>s;
       s.push(root);
       Node *current=root;
       while(!s.empty()){
         Node *current=s.top();s.pop();
         cout << current->data << " ";
         if(current->right) s.push(current->right);
         if(current->left) s.push(current->left);
       }

     }
 

  }
   void Postorder(Node *root){
     if(root){
       stack<Node*>s;
        Node *current=root;
        
        while(!s.empty()||current){
           int cnt=0;
           if(current){
             s.push(current);
             current=current->left;
      
           }
           else{
             
               Node *temp=s.top()->right;
  
              if(!temp)
                 {
                      temp=s.top();
                    s.pop();
                   cout << temp->data << " ";
                   while(!s.empty()&&s.top()->right==temp){
                      temp=s.top();
                      cout << temp->data << " ";
                      s.pop();
                  
                   }
                 } 
                 else
                 current=temp;         
             
           }
          
        }
     }
   }
};
int main(){
Node*root=new Node(1);
root->left=new Node(2);
root->right=new Node(3);
root->left->left=new Node(4);
root->left->right=new Node(5);
root->left->right->left=new Node(7);
root->right->right=new Node(6);
 Solution MyTree;
 cout << "Inorder :" ;
 MyTree.Inorder(root);
 cout << "\n";
 cout << "Preorder :" ;
 MyTree.Preorder(root);
  cout << "\n";
  cout << "Postorder :" ;
 MyTree.Postorder(root);
}