#include <iostream>

class node {
 public:
  node(char); //Constructs the node with a char in it
  ~node(); //Node destructor
  void setLeft(node*);
  node* getLeft();
  void setRight(node*);
  node* getRight();
  char getOp ();
 private:
  node* left;
  node* right;
  char stored;
};
