#include <bits/stdc++.h>
using namespace std;

void maxPairs(int nums[], int n, int k)
{
sort(nums, nums + n);
int result = 0;
int start = 0, end = n - 1;
while (start < end) {

	if (nums[start] + nums[end] > k)

	end--;

	else if (nums[start] + nums[end] < k)

	start++;

	else
	{
	start++;
	end--;
	result++;
	}
}
cout << result << endl;;
}
int main()
{
int arr[] = { 1, 2, 3, 4 };
int n = sizeof(arr)/sizeof(arr[0]);
int K = 5;
maxPairs(arr, n, K);

return 0;
}
