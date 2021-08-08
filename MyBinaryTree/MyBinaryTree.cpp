#include "MyBinaryTree.h"

TreeNode::TreeNode()
{
	data = NULL;
	left = nullptr;
	right = nullptr;
}

TreeNode::TreeNode(int DATA)
{
	data = DATA;
	left = nullptr;
	right = nullptr;
}

TreeNode::TreeNode(int& DATA)
{
	data = DATA;
	left = nullptr;
	right = nullptr;
}

TreeNode* BinaryTree::getRoot()
{
	return root;
}

BinaryTree::BinaryTree()
{
	root = nullptr;
}

BinaryTree::~BinaryTree()
{
	destroy_tree();
}

void BinaryTree::insert(int DATA)
{
	if (root != nullptr)
	{
		insert(root, DATA);
	}
	else
	{
		root = new TreeNode;
		root->data = DATA;
		root->left = nullptr;
		root->right = nullptr;
	}
}

void BinaryTree::destroy_tree()
{
	destroy_tree(root);
}

void BinaryTree::Pre_order()
{
	Pre_order(root);
}

void BinaryTree::Post_order()
{
	Post_order(root);
}

void BinaryTree::In_order()
{
	In_order(root);
}

void BinaryTree::insert(TreeNode* leaf, int DATA)
{
	if (DATA < leaf->data)
	{
		if (leaf->left != nullptr)
			insert(leaf->left, DATA);
		else
		{
			leaf->left = new TreeNode();
			leaf->left->data = DATA;
			leaf->left->left = nullptr;
			leaf->left->right = nullptr;
		}
	}

	else if (DATA >= leaf->data)
	{
		if (leaf->right != nullptr)
			insert(leaf->right, DATA);
		else
		{
			leaf->right = new TreeNode();
			leaf->right->data = DATA;
			leaf->right->left = nullptr;
			leaf->right->right = nullptr;
		}
	}
}

void BinaryTree::destroy_tree(TreeNode* leaf)
{
	if (leaf != nullptr)
	{
		destroy_tree(leaf->left);
		destroy_tree(leaf->right);
		delete leaf;
	}
	else
		cout << "The tree is already empty." << endl;
}

void BinaryTree::In_order(TreeNode* leaf)
{
	if (leaf != nullptr)
	{
		In_order(leaf->left);
		cout << leaf->data << " ";
		In_order(leaf->right);
	}
}

void BinaryTree::Pre_order(TreeNode* leaf)
{
	if (leaf != nullptr)
	{
		cout << leaf->data << " ";
		Pre_order(leaf->left);
		Pre_order(leaf->right);
	}
}

void BinaryTree::Post_order(TreeNode* leaf)
{
	if (leaf != nullptr)
	{
		Post_order(leaf->left);
		Post_order(leaf->right);
		cout << leaf->data << " ";
	}
}