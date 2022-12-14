//------------------------------------------------------------------------------
// Tree.h : class declaration
//------------------------------------------------------------------------------
class Tree {
private:
	static int objectCount;    // Static member variable.

public:
	// Constructor
	Tree() 	{ objectCount++; }

	// Accessor function for objectCount
	static int getObjectCount() { return objectCount; }
};

// Definition of the static member variable, written
// outside the class.
int Tree::objectCount = 1;