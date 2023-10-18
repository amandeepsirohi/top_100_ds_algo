/*

Given a sorted integer array, find the index of a given number's first and last occurrence.

Input: nums[] = [2, 5, 5, 5, 6, 6, 8, 9, 9, 9], target = 5
Output: (1, 3)
Explanation: The first and last occurrence of element 5 is located at index 1 and 3, respectively.

• If the target is not present in the array, the solution should return the pair (-1, -1).

Input: nums[] = [2, 5, 5, 5, 6, 6, 8, 9, 9, 9], target = 4
Output: (-1, -1)

*/

TC - O(log(n));
SC - O(1)

class Solution
{
public:
	int first_occ(vector<int> const &arr , int target)
	{
		int n = arr.size();
		int l = 0 , h = n -1;
		int result = -1;
		while(l <= h)
		{
			int mid = (l + (h -l) / 2);
			if(arr[mid] == target)
			{
				h = mid -1;
				result = mid;
			}
			else if(arr[mid] > target)
			{
				h = mid -1;
			}
			else{
				l = mid +1;
			}
		}
		return result;
	}
	int last_occ(vector<int> const &arr , int target)
	{
		int n = arr.size();
		int l = 0 , h = n -1;
		int result = 0;
		while(l <= h)
		{
			int mid = (l + (h -l) / 2);
			if(arr[mid] == target)
			{
				l = mid +1;
				result = mid;
			}
			else if(arr[mid] > target)
			{
				h = mid -1;
			}
			else{
				l = mid +1;
			}
		}
		return result;
	}
	pair<int,int> findPair(vector<int> const &nums, int target)
	{
		// Write your code here...
		int f = first_occ(nums , target);
		if(f == -1) return {-1 , -1};
		int l = last_occ(nums , target);
		return {f , l};
	}
};
