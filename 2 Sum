/*

Given an unsorted integer array, find a pair with the given sum in it.

• Each input can have multiple solutions. The output should match with either one of them.

Input : nums[] = [8, 7, 2, 5, 3, 1], target = 10
Output: (8, 2) or (7, 3)

• The solution can return pair in any order. If no pair with the given sum exists, the solution should return the pair (-1, -1).

Input : nums[] = [5, 2, 6, 8, 1, 9], target = 12
Output: (-1, -1)

*/

TC- O(nlogn)
SC- O(n)

#include <bits/stdc++.h>
class Solution
{
public:
	pair<int,int> findPair(vector<int> const &nums, int target)
	{	int n = nums.size();
		vector<int> arr = nums;
		sort(arr , arr + n);
		int i = 0 , j = n -1;
		while(i < j)
		{
			if(arr[i] + arr[j] == target)
			{
				return {arr[i] , arr[j]};
			}
			(arr[i] + arr[j] > target ? j -= 1 : i +=1);
		}
		return {-1 , -1};
	}
};
