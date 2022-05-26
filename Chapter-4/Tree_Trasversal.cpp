#include<iostream>
using namespace std;
struct N{
 int data;
 struct N *t, *r;
};
N* newN(int data){
 N* temp = new N;
 temp->data = data;
 temp->t = NULL;
 temp->r = NULL;
 return temp;
}
void postorder(struct N* n)
{
 if (n == NULL)
  return;
 postorder(n->t);
 postorder(n->r);
 cout<<n->data<< " ";
}
void inorder(struct N* n)
{
 if (n==NULL)
  return;
 inorder(n->t);
 cout<<n->data << " ";
 inorder(n->r);
}
void preorder(struct N* n)
{
 if (n == NULL)
  return;
 cout<<n->data<< " ";
 preorder(n->t);
 preorder(n->r);
}
int main()
{
struct N* root = newN(1);
 root->t = newN(2);
 root->r = newN(3);
 root->t->t = newN(4);
 root->t->r = newN(5);
cout<<"\nPreorder traversal of binary tree is \n";
 preorder(root);
cout<<"\nInorder traversal of binary tree is \n";
 inorder(root);
cout<<"\nPostorder traversal of binary tree is \n";
    postorder(root);
 return 0;
}
