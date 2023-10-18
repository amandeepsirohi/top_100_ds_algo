/*

Given an integer array, find a pair with the maximum product in it.

Each input can have multiple solutions. The output should match with either one of them.

Input : [-10, -3, 5, 6, -2]
Output: (-10, -3) or (-3, -10) or (5, 6) or (6, 5)

Input : [-4, 3, 2, 7, -5]
Output: (3, 7) or (7, 3)

If no pair exists, the solution should return the pair (-1, -1).

Input : [1]
Output: (-1, -1)

*/

TC - O(n)
SC - O(n)


#include <bits/stdc++.h>

class Solution
{
public:
	pair<int,int> findPair(vector<int> const &arr)
	{
		// Write your code here...
		if(arr.size()  <= 1) return {-1 , -1};
		
		int n = arr.size();
		
		int fl = arr[0] , sl = INT_MIN , fs = arr[0], ss = INT_MAX;
		
		for(int i = 1 ; i < n ; i++)
		{
			if(arr[i] > fl)
			{	sl = fl;
				fl = arr[i];
			}
			else if(arr[i] > sl) sl = arr[i];
			if(arr[i] < fs){
				ss = fs;
				fs = arr[i];
			}
			else if(arr[i] < ss ) ss = arr[i];
		}
		int k = fl * sl;
		int l = fs * ss;
		if(k >= l)
		{
			return {fl , sl};
		}
		return {fs , ss};
	}
};
