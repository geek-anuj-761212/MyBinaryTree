#pragma once

#pragma once
#include<all_c++.h>
using namespace std;

//////////////////////////////////////////////////////////////////////////
//Class to create nodes for The binary tree containing integer type data//
//////////////////////////////////////////////////////////////////////////

class TreeNode
{
public:
	TreeNode();              //Constructor 
	TreeNode(int data);	 //Constructor with an integer argument
	TreeNode(int& DATA);     //Constructor with an integer value passed by reference
	int data;
	TreeNode* left;
	TreeNode* right;
};


///////////////////////////////////////////////////////////////////////
//Class for creating BinaryTree type object using TreeNode type nodes//
///////////////////////////////////////////////////////////////////////

class BinaryTree
{
public:
	TreeNode* getRoot();
	BinaryTree();		//Constructor
	~BinaryTree();		//Destructor
	void insert(int DATA);  //insert function with parameter passed by value
	void destroy_tree();
	
	void In_order();    //////////////////////////////
	void Pre_order();   ///Tree Traversal functions///
	void Post_order();  //////////////////////////////
private:
	TreeNode* root;
	void insert(TreeNode* leaf, int DATA);
	void destroy_tree(TreeNode* leaf);
	void In_order(TreeNode* leaf);       ////////////////////////////////////
	void Pre_order(TreeNode* leaf);      //Private Methods to implement the//
	void Post_order(TreeNode* leaf);     //public traversal methods//////////
};
