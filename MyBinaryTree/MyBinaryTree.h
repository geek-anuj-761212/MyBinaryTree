#pragma once

#pragma once
#include<all_c++.h>
using namespace std;

class TreeNode
{
public:
	TreeNode();
	TreeNode(int data);
	TreeNode(int& DATA);
	int data;
	TreeNode* left;
	TreeNode* right;
};

class BinaryTree
{
public:
	TreeNode* getRoot();
	BinaryTree();
	~BinaryTree();
	void insert(int DATA);
	void destroy_tree();
	void In_order();
	void Pre_order();
	void Post_order();
private:
	TreeNode* root;
	void insert(TreeNode* leaf, int DATA);
	void destroy_tree(TreeNode* leaf);
	void In_order(TreeNode* leaf);
	void Pre_order(TreeNode* leaf);
	void Post_order(TreeNode* leaf);
};