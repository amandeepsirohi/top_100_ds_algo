/*

Given the root of a binary tree, return the preorder traversal of its nodes' values.

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

Output: [1, 2, 4, 3, 5, 7, 8, 6]

*/

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
	
	TC-O(n)
	SC-O(n)
	
	void preorder(Node *root , vector<int> &arr)
	{
		if(root == NULL)
		{
			return;
		}
		arr.push_back(root->data);
		preorder(root->left , arr);
		preorder(root->right , arr);
	}
	
	vector<int> findPreorderTraversal(Node* root)
	{
		// Write your code here...
		vector<int> ans;
		preorder(root , ans);
		return ans;
	}
};
