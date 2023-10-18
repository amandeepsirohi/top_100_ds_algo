/*

Given a circularly sorted array of distinct integers, find the total number of times the array is rotated. You may assume that the rotation is in anti-clockwise direction.

Input: [8, 9, 10, 2, 5, 6]
Output: 3

Input: [2, 5, 6, 8, 9, 10]
Output: 0

*/

TC- O(logn)
SC - O(1)

class Solution
{
public:
	int findRotationCount(vector<int> const &arr)
	{	int n  = arr.size();
		int low = 0, high = n - 1; 
    if (arr[low] <= arr[high]) 
        return 0; 
    /*returns 0 if array is already sorted*/
    while (low <= high) { 
  
        int mid = low + (high - low) / 2; 
        int prev = (mid - 1 + n) % n; 
        int next = (mid + 1) % n; 
  
        if (arr[mid] <= arr[prev] && arr[mid] <= arr[next]) 
            return mid; 
        else if (arr[mid] <= arr[high]) 
            high = mid - 1; 
        else if (arr[mid] >= arr[0]) 
            low = mid + 1; 
    } 
    return 0; 
	}
};
