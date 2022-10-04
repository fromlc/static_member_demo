//------------------------------------------------------------------------------
// Pr14-1.cpp
// 
// This program demonstrates a static member variable.
// 
// Author: Gaddis 9E pp.818-819
//------------------------------------------------------------------------------
#include <iostream>

#include "Tree.h"

//------------------------------------------------------------------------------
// using symbols
//------------------------------------------------------------------------------
using std::cout;

//------------------------------------------------------------------------------
// globals
//------------------------------------------------------------------------------
static int g_count;

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {

	cout << "We have " << Tree::getObjectCount() << " Tree instance\n\n";

	// Declare first Tree object
	Tree oak;
	cout << "Oak tree\n";

	// Display the number of Tree objects we have.
	cout << "We have " << oak.getObjectCount() << " Tree instance\n\n";

	// Declare second Tree object
	Tree elm;
	cout << "Elm tree\n";

	// Display the number of Tree objects we have.
	cout << "We have " << oak.getObjectCount() << " Tree instances\n\n";

	// Declare third Tree object
	Tree pine;
	cout << "Pine tree\n";

	// Display the number of Tree objects we have.
	cout << "We have " << elm.getObjectCount() << " Tree instances\n\n";
	
	return 0;
}