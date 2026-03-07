#include<iostream>
#include<deque>
struct TreeNode (){
int val ;
TreeNode * left;
TreeNode * right;
}

int zig_zag(TreeNode *root ){
  deque<TreeNode*> pq;
  pq.push(root);
  bool lefttoright =  true;
  while(!pq.empty()){
  int size = pq.size():
if(lefttoright){
  for(int i = 0 ;i < size ; i++){
     auto node = pq.front();
     pq.pop_front():
     cout<<node->val;
     if(node->left) pq.push(node->left);
     if(node->right) pq.push(node->right);
  }
    
    else{
      for(int i = 0 ; i < size ; i++){
        auto node = pq.back();
        pq.pop_back();
        cout<<node->val;
        if(node->right) pq.push_front(node->right);
        if(node->left) pq.push_front(node->left);
      }
      cout<<endl;
  }
