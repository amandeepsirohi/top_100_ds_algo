/*

Given an array of integers, implement a linked list out of the array keys. The solution should create a new node for every key and insert it onto the list's front.

Input : [1, 2, 3, 4, 5]
Output: 1 —> 2 —> 3 —> 4 —> 5 —> nullptr

*/

class Solution
{
public:

	/*
		A singly-linked list node is defined as:

		class Node
		{
		public:
			int data;				// data field
			Node* next = nullptr; 	// pointer to the next node

			Node() {}
			Node(int data): data(data) {}
			Node(int data, Node *next): data(data), next(next) {}
		};
	*/

	Node* construct(vector<int> const &keys)
	{
		// Write your code here...
		Node *curr = new Node(keys[0]);
		Node *head = curr;
		for(int i = 1 ; i < keys.size() ; i++)
		{
			Node *gg = new Node(keys[i]);
			curr->next = gg;
			curr = gg;
		}
		curr->next = nullptr;
		return head;
	}
};
