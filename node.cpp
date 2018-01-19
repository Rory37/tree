#include "node.h"

node :: node(char comp) { //Constructor with character stored in it
  stored = comp; //puts character into variable
  left = NULL;//no branch left
  right = NULL;//no branch right
}

node :: ~node() { //destructor
  //Gets rid of pointers
  left = NULL;
  right = NULL;
}

void node :: setLeft(node* newLeft) { //Will put a pointer to lower left node
  left = newLeft;//stores pointer
}

void node :: setRight(node* newRight) { //Will put a pointer to lower right node
  right = newRight;//stores pointer
}

node* node :: getLeft() {//returns lower left node
  return left;
}

node* node :: getRight() {//returns lower right node
  return right;
}

char node :: getOp() {//returns character
  return stored;
}


