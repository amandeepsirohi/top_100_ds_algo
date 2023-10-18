/*

Given an integer array, in-place move all zeros present in it to the end. The solution should maintain the relative order of items in the array and should not use constant space.

Input : [6, 0, 8, 2, 3, 0, 4, 0, 1]
Output: [6, 8, 2, 3, 4, 1, 0, 0, 0]

*/

TC-O(n)
SC-O(1)

class Solution
{
public:
	void rearrange(vector<int> &nums)
	{
		// Write your code here...
		int j = 0;
		for(int i = 0 ; i < nums.size() ; i++)
		{
			if(nums[i] != 0)
			{
				swap(nums[i] , nums[j]);
				j += 1;
			}
		}
	}
};
