/*

Given an integer array, find the maximum sum among all its subarrays.

Input : [-2, 1, -3, 4, -1, 2, 1, -5, 4]
Output: 6
Explanation: The maximum sum subarray is [4, -1, 2, 1]

Input : [-7, -3, -2, -4]
Output: -2
Explanation: The maximum sum subarray is [-2]

Input : [-2, 2, -1, 2, 1, 6, -10, 6, 4, -8]
Output: 10
Explanation: The maximum sum subarray is [2, -1, 2, 1, 6] or [6, 4] or [2, -1, 2, 1, 6, -10, 6, 4]

*/


TC- O(n)
SC - O(1)

class Solution
{
public:
	int findMaxSubarraySum(vector<int> const &nums)
	{
		// Write your code here...
		int max_sum = nums[0] , final_sum = nums[0];
		for(int i = 1 ; i < nums.size() ; i++)
		{
			max_sum = max(max_sum + nums[i] , nums[i]);
			final_sum = max(max_sum , final_sum);
		}
		return final_sum;
	}
};
