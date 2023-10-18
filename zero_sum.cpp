/*

Given an integer array, check if it contains a contiguous subarray having zero-sum.

Input : [3, 4, -7, 3, 1, 3, 1, -4, -2, -2]
Output: true
Explanation: The subarrays with zero-sum are

[3, 4, -7]
[4, -7, 3]
[-7, 3, 1, 3]
[3, 1, -4]
[3, 1, 3, 1, -4, -2, -2]
[3, 4, -7, 3, 1, 3, 1, -4, -2, -2]

Input : [4, -7, 1, -2, -1]
Output: false/*

Given an integer array, check if it contains a contiguous subarray having zero-sum.

Input : [3, 4, -7, 3, 1, 3, 1, -4, -2, -2]
Output: true
Explanation: The subarrays with zero-sum are

[3, 4, -7]
[4, -7, 3]
[-7, 3, 1, 3]
[3, 1, -4]
[3, 1, 3, 1, -4, -2, -2]
[3, 4, -7, 3, 1, 3, 1, -4, -2, -2]

Input : [4, -7, 1, -2, -1]
Output: false
Explanation: The subarray with zero-sum doesn't exist.

*/

SC-O(n)
TC-O(n)

#include <bits/stdc++.h>

class Solution
{
public:
	bool hasZeroSumSubarray(vector<int> const &arr)
	{
		// Write your code here...
		unordered_set<int> s;
		s.insert(0);
		int sum = 0;
		for(int i = 0 ; i < arr.size() ; i++)
		{
			sum += arr[i];
			if(s.find(sum) != s.end())
			{
				return true;
			}
			s.insert(sum);
		}
		return false;
		
	}
};

Explanation: The subarray with zero-sum doesn't exist.

*/

SC-O(n)
TC-O(n)

#include <bits/stdc++.h>

class Solution
{
public:
	bool hasZeroSumSubarray(vector<int> const &arr)
	{
		// Write your code here...
		unordered_set<int> s;
		s.insert(0);
		int sum = 0;
		for(int i = 0 ; i < arr.size() ; i++)
		{
			sum += arr[i];
			if(s.find(sum) != s.end())
			{
				return true;
			}
			s.insert(sum);
		}
		return false;
		
	}
};
