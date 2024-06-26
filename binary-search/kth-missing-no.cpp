// Kth Missing Positive Number
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        int i = 0, j = arr.size() - 1;
        while (i <= j)
        {
            int mid = i + (j - i) / 2;
            if (arr[mid] - mid - 1 < k)
            {
                i = mid + 1;
            }
            else
            {
                j = mid - 1;
            }
        }
        return k + i;
    }
};