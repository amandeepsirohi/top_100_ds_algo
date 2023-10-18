/*

Given an integer array, right-rotate it by `k` positions, where `k` is a postive integer.

Input: nums[] = [1, 2, 3, 4, 5], k = 2
Output: [4, 5, 1, 2, 3]

Input: nums[] = [1, 2, 3, 4, 5, 6, 7], k = 3
Output: [5, 6, 7, 1, 2, 3, 4]

Input: nums[] = [1, 2, 3, 4, 5], k = 6
Output: [1, 2, 3, 4, 5]

*/

class Solution
{
public:
	void rotate(int low , int high , vector<int> &arr)
	{	
		while(low <= high)
		{
			int temp = arr[low];
			arr[low] = arr[high];
			arr[high] = temp;
			low += 1;
			high -= 1;
		}
	}
	void rightRotate(vector<int> &nums, int k)
	{
		// Write your code here...
		int n = nums.size();
		k %= n;
		rotate(0 , n - k -1 , nums); //reverse first n-k
		rotate( n - k , n -1 , nums);//reverse last k
		rotate(0 , n -1 , nums);//reverse all
	}
};
