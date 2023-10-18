/*

Given the root of a binary tree, return the inorder traversal of its nodes' values.

Input:
		   1
		 /   \
		/	  \
	   2	   3
	  /		  / \
	 /	  	 /	 \
	4		5	  6
		   / \
		  /   \
		 7	   8

Output: [4, 2, 1, 7, 5, 8, 3, 6]

*/

TC- O(n)
SC-O(n)


class Solution
{
public:

	/*
		A binary tree node is defined as:

		class Node
		{
		public:
			int data;									// data field
			Node* left = nullptr, *right = nullptr;		// pointer to the left and right child

			Node() {}
			Node(int data): data(data) {}
			Node(int data, Node *left, Node *right): data(data), left(left), right(right) {}
		};
	*/
	
	void inorder(Node *root , vector<int> &arr)
	{
		if(root == NULL) return;
		inorder(root->left , arr);
		arr.push_back(root->data);
		inorder(root->right , arr);
	}
	
	vector<int> findInorderTraversal(Node* root)
	{
		// Write your code here...
		vector<int> arr;
		inorder(root , arr);
		return arr;
	}
};
