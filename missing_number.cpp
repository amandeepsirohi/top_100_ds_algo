/*

Given an integer array of size `n` and containing elements between 1 and `n+1` with one element missing, find the missing number using constant space.

Input: [3, 2, 4, 6, 1]
Output: 5

Input: [3, 2, 4, 5, 6]
Output: 1

Input: [3, 2, 4, 5, 1]
Output: 6

Assume valid input.

*/

class Solution
{
public:
	int findMissingNumber(vector<int> const &nums)
	{
		// Write your code here...
		int ans = 1;
		int res = 0;
		for(int i = 0 ; i < nums.size() ; i++,ans++)
		{
			res ^= ans^nums[i];
		}
		return res^(nums.size() + 1);
	}
};
