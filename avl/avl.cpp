#include<iostream>
using namespace std;

struct node{
   int key;
   node *left;
   node *right;
   int height;
node(int k){
  key = k;
  left = nullptr;
  right = nullptr;
  height = 1;
}};
int height(node *root){
  if(!root) return nullptr;
  return root->height;
}
node *leftrotate(node *y){
  node *x = y->left;
  node *T = x->right;
  x->right = y;
  y->left = T;
  x->height = 1 + max(height(x->left) ,height( x->right));
  y->height = 1 + max(height(y->left) ,height( y->right));
return x;
}

node *right_rotate(node *x){
  node *y = x->right;
  node *T = y->left;
  y->left = x;
  x->right = T;
  x->height = 1 + max(height(x->left) ,height( x->right));
  y->height = 1 + max(height(y->left) ,height( y->right));
 return y;
}
int get_balance(node *root){
  if(!root) return 0;
  return height(root->left) - height(root->right):
}
void preorder(node* root){
  if(!root) return ;
  cout<<root->key;
  if(root->left) preorder(root->left);
  if(root->right) preorder(root->right);
}

node *insert(node *root , int key){
  if(!root) return new node(key);
  if(key < root->key) root->left = insert(root->left, key);
  if(key> root->key ) root->right = insert(root->right , key);
  else return root;
  root->height = 1 +max(height(root->left) , height(root->right));
  int balance = get_balance(root);
  //ll
  if(balance > 1 && key < root->left->key) 
    return left_rotate(root);
  //rr
  if(balance < -1 && key >root->right->key) 
    return right_rotate(root);
  //lr 
  if(balance > 1 && key > root->left->key){
    root->left = left_rotate(root);
    return right_rotate(root);
  }
  //rl
  if(balance < -1 && key > root->right->key){
    root->right = right_rotate(root);
    return left_rotate(root);
  }
}
