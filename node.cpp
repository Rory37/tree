#include "node.h"

node :: node(char comp) {
  stored = comp;
  left = NULL;
  right = NULL;
}

node :: ~node() {
  left = NULL;
  right = NULL;
}

void node :: setLeft(node* newLeft) {
  left = newLeft;
}

void node :: setRight(node* newRight) {
  right = newRight;
}

node* node :: getLeft() {
  return left;
}

node* node :: getRight() {
  return right;
}

char node :: getOp() {
  return stored;
}


