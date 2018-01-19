//all the include
#include <iostream>
#include "node.h"
#include <cstring>
#include <ctype.h>

void addEq(char[], node*&, bool, node*)//takes character array in infix and a node head and makes a new tree


using namespace std;

int main() {
  bool running = true;//keeps the program repeating
  node* top = NULL;//node at top of tree
  node* center; //for initial pass to add
  while (running){
    cout << "This is the notation changer. Type add or print" << endl;
    char[80] in;//takes in command
    cin.getline(in, 80);
    for (i = 0; i < strlen(in); i++) {//for length for input
      in[i] = toupper(in[i]); //puts entire input into uppercase
    }
    if (in == "ADD") {//if they type add
      char[80] infix;//holds the infix equation
      cout << "Please enter your equation in infix notation (like one would one paper)";
      cin.getline(infix, 80);//puts input into array
      add(infix, top, true, top);//runs add function
    }
    else if (in == "PRINT"){
      
    }
    else if(in == "QUIT") {
      running = false;
    }
    else{
      cout << "Please make sure you input one of the options" << endl;
    }
  }
  //Stuff to clean up pointers before ending
}

void add(char[80] equ, node*& start, bool norecur, node*& center){
  if (start != NULL && norecur == true) {//if existing tree
    //will destroy tree eventually
    start = NULL; 
  }
  node* bleft = NULL;
  node* bright = NULL;
  for (i = 0; i < strlen(equ); i++) { //will check parenthesis
    if (equ[i] == "("{ //if opening parenthesis
	int countu = 1;
	bool ir = false;
	if(i-1 != 0) {
	  ir = true;
	}
	char[80] cut; //new array
	for (j = equ[i]+1; j < srtlen(equ); j++) {//starts one infront of parenthesis
       	  if(equ[j] == "(") { //if another opening
	    countu++; //goes up in count of parens to close
	  }
	  else if(equ[j] == ")") {//if closing
	    countu --;//decreases count of parens to close
	  }
	  if (countu == 0) {//when all parens have been closed
	    add(cut, head, false, center);//recursively runs add with interior of parens
	    if(equ[j+1] != \0 && bleft == NULL && bright == NULL) {
	      if (norecur == true){
		if (ir == false){
		  start = new node(equ[j+1]);
		  bleft = center;
		}
		else{
		  start = new node(equ[j+1]);
		  bright = center;
		}
	      }
	      else {
		if (ir == false){
		  start = new node(equ[j+1]);
		  bleft = center;
		}
		else{
		  start = new node(equ[j+1]);
		  bright = center;
		}
	      }
	    }
	    else if (bleft == NULL) {
	      start = center;
	    }
	  }
	  cut[j-equ[i]] = equ[j]//at end gaurantees parens are not in new array
	}
      }
   }
   for (i = 0; i < strlen(equ); i++) { //will check powers
     if (equ[i] == "^"{ //if carrot
	 node* left = new node(equ[i-1]);
	 node* right = new node(equ[i+1]);
	 center = new node('^');
	 center -> setLeft(left);
	 center -> setRight(right);
     }
   }
   for (i = 0; i < strlen(equ); i++) { //will check powers
     if (equ[i] == "/"{ //if division
	 node* left = new node(equ[i-1]);
	 node* right = new node(equ[i+1]);
	 center = new node('/');
	 center -> setLeft(left);
	 center -> setRight(right);
     }
   }
   for (i = 0; i < strlen(equ); i++) { //will check powers
     if (equ[i] == "*"{ //if multiplication
	 node* left = new node(equ[i-1]);
	 node* right = new node(equ[i+1]);
	 center = new node('*');
	 center -> setLeft(left);
	 center -> setRight(right);
       }
    }
    for (i = 0; i < strlen(equ); i++) { //will check powers
      if (equ[i] == "-"{ //if subtraction
	  node* left = new node(equ[i-1]);
	  node* right = new node(equ[i+1]);
	  center = new node('-');
	  center -> setLeft(left);
	  center -> setRight(right);
      }
    }
    for (i = 0; i < strlen(equ); i++) { //will check powers
      if (equ[i] == "+"{ //if addition
	  node* left = new node(equ[i-1]);
	  node* right = new node(equ[i+1]);
	  center = new node('+');
	  center -> setLeft(left);
	  center -> setRight(right);
      }
    }
}
