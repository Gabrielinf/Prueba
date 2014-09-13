// Copyright 2001 softSurfer, 2012 Dan Sunday
// This code may be freely used and modified for any purpose
// providing that this copyright notice is included with it.
// SoftSurfer makes no warranty for this code, and cannot be held
// liable for any real or imagined damage resulting from its use.
// Users of this code must verify correctness for their application.


// Assume that classes are already given for the objects:
//    Point with 2D coordinates {float x, y;}
//    Polygon with n vertices {int n; Point *V;} with V[n]=V[0]
//    Tnode is a node element structure for a BBT
//    BBT is a class for a Balanced Binary Tree
//        such as an AVL, a 2-3, or a  red-black tree
//        with methods given by the  placeholder code:

typedef struct _BBTnode Tnode;
struct _BBTnode {
    void* val;
    // plus node mgmt info ...
};

class BBT {
    Tnode   *root;
public:
    BBT() {root = (Tnode*)0;}   // constructor
    ~BBT() {freetree();}        // destructor
    
    Tnode*  insert( void* ){};       // insert data into the tree
    Tnode*  find( void* ){};         // find data from the tree
    Tnode*  next( Tnode* ){};        // get next tree node
    Tnode*  prev( Tnode* ){};        // get previous tree node
    void    remove( Tnode*  ){};     // remove node from the tree
    void    freetree(){};            // free all tree data structs
};
// NOTE:
// Code for these methods must be provided for the algorithm to work.
// We have not provided it since binary tree algorithms are well-known
// and code is widely available. Further, we want to reduce the clutter
// accompanying the essential sweep line algorithm.

/**
 Recently, a complete simple_Polygon() algorithm using an AVL tree has been developed by
 [Glenn Burkhardt, 2014], and provided to us for publication here. He integrated our code
 with AVL tree code previously developed by [Brad Appleton, 1997], and modified both to
 improve the algorithm’s efficiency.
 **/
//===================================================================