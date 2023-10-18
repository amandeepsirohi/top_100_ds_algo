/*

Given a binary array, in-place sort it in linear time and constant space. The output should contain all zeroes, followed by all ones.

Input : [1, 0, 1, 0, 1, 0, 0, 1]
Output: [0, 0, 0, 0, 1, 1, 1, 1]

Input : [1, 1]
Output: [1, 1]

*/


TC - O(n)
SC- O(n)

class Solution
{
public:
	void sortArray(vector<int> &arr)
	{
		// Write your code here...
		int j = 0 , n = arr.size();
		for(int i = 0 ; i < n ; i++)
		{	if(arr[i] ==0)
			{
				arr[j++] = 0;
			}
		}
		for(int i = j ; i< n ; i++) arr[i] = 1;
		return;
	}
};
