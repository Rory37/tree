#include <iostream>

class node {
 public:
  node(char); //Constructs the node with a char in it
  ~node(); //Node destructor
  void setLeft(node*);//will set lower left node
  node* getLeft();//will return lower left node
  void setRight(node*);//will set lower right node
  node* getRight();//will return lower right node
  char getOp ();//returns character
 private:
  node* left;//stores pointer to lower left node
  node* right;//stores pointer to lower right node
  char stored; //stores character
};
